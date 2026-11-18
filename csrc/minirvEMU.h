#include <fstream>
#include <stdio.h>
#include <cstdint>
#include <string>

constexpr int ref_MEMORY_SIZE = 1<<25;
constexpr int REG_NUMBER = 32;

constexpr uint32_t ref_DEFAULT_PC = 0x80000000; 
uint32_t ref_PC = ref_DEFAULT_PC;
uint32_t ref_MEM[ref_MEMORY_SIZE];
uint32_t ref_REG[REG_NUMBER];

int ref_UART_ready = 228;
int ref_EXIT_CODE = 0;
uint32_t ref_steps = 0;
bool ref_is_VGA = false, ref_is_ebreak = false;
uint32_t ref_VGA_x = 0, ref_VGA_y = 0;
uint32_t ref_VGA_col = 0;

void SET_UART_READY(int data){
    ref_UART_ready = data;
}

uint32_t get_value(uint32_t inst, int lbit, int rbit){
    uint32_t mask = (1U << (lbit - rbit + 1)) - 1;
    return (inst>>rbit) & mask;
}

uint32_t sign_extend(uint32_t val, int bits){
    uint32_t mask = 1U << (bits - 1);
    return (val ^ mask) - mask;
}

void minirv_step(){
    uint32_t inst = ref_MEM[(ref_PC-ref_DEFAULT_PC)/4];

    uint32_t opcode = get_value(inst, 6, 0);
    uint32_t funct_3 = get_value(inst, 14, 12);
    uint32_t funct_7 = get_value(inst, 31, 25);
    uint32_t funct_12 = get_value(inst, 31, 20);
    
    uint32_t rd = get_value(inst, 11, 7);
    uint32_t rs1 = get_value(inst, 19, 15);
    uint32_t rs2 = get_value(inst, 24, 20);
    
    uint32_t imm_I = sign_extend(get_value(inst, 31, 20), 12);
    uint32_t imm_S = sign_extend((get_value(inst, 31, 25) << 5) | get_value(inst, 11, 7), 12);
    uint32_t imm_U = inst & 0xFFFFF000;
    
    uint32_t next_PC = ref_PC + 4U;
    
    ref_is_VGA = false;

    switch (opcode){
        case 0x37:{ //lui
                ref_REG[rd] = imm_U;
                break;
        } case 0x13:{ //addi
            if(funct_3 == 0x0){
                ref_REG[rd] = ref_REG[rs1] + imm_I;
            }
            break; 
        } case 0x67: {//jalr
            if(funct_3 == 0x0){ 
                // printf("%x\n", (ref_REG[rs1] + imm_I) & (~1U));
                next_PC = (ref_REG[rs1] + imm_I) & (~1U);
                ref_REG[rd] = ref_PC + 4U;
            }
            break;
        } case 0x33: {//add
            if(funct_3 == 0x0 && funct_7 == 0x0){
                ref_REG[rd] = ref_REG[rs1] + ref_REG[rs2];
            }
            break;
        } case 0x03: {//load from RAM
            
            uint32_t unshifted_RAM_addr = ref_REG[rs1] + imm_I;
            if(unshifted_RAM_addr == 0x10000004){
                int used = ref_UART_ready;
                ref_REG[rd] = used;
                break;
            }
            uint32_t RAM_addr = unshifted_RAM_addr - ref_DEFAULT_PC;
            // printf("RAM_addr= %x\n", RAM_addr);
            if(funct_3 == 0x2){ //lw
                ref_REG[rd] = ref_MEM[RAM_addr/4];
            } else if(funct_3 == 0x4){ //lbu
                switch (RAM_addr%4)
                {
                    case 0x0:
                        ref_REG[rd] = get_value(ref_MEM[RAM_addr/4], 7, 0);
                    break;
                    case 0x1:
                        ref_REG[rd] = get_value(ref_MEM[RAM_addr/4], 15, 8);
                    break;
                    case 0x2:
                        ref_REG[rd] = get_value(ref_MEM[RAM_addr/4], 23, 16);
                    break;
                    case 0x3:
                        ref_REG[rd] = get_value(ref_MEM[RAM_addr/4], 31, 24);
                    break;
                    default:
                        break;
                }
            }
            break;
        } case 0x23: {//store in RAM
            uint32_t unshifted_RAM_addr = ref_REG[rs1] + imm_S;
            if (unshifted_RAM_addr == 0x10000000) {  // write to UART
                // fputc(ref_REG[rs2] & 0xff, stderr);   // defined in stdio.h
                break;
            }
            else if(unshifted_RAM_addr >= 0x20000000 && unshifted_RAM_addr < 0x20040000){
                ref_is_VGA = true;
                ref_VGA_x = get_value(unshifted_RAM_addr, 9, 2);
                ref_VGA_y = get_value(unshifted_RAM_addr, 17, 10);
                ref_VGA_col = ref_REG[rs2];
                break;
            } else {
                ref_is_VGA = false;
            }
            
            // after ref_MEM write in the sw case:
            uint32_t RAM_addr = unshifted_RAM_addr - ref_DEFAULT_PC;
            if(funct_3 == 0x0){ // sb
                uint32_t shift = (RAM_addr%4) * 8;
                uint32_t byte_val = ref_REG[rs2] & 0xFFU;
                ref_MEM[RAM_addr/4] = (ref_MEM[RAM_addr/4] & ~(0xFFU << shift)) | (byte_val << shift);
            } else if(funct_3 == 0x2){ //sw
                ref_MEM[RAM_addr/4] = ref_REG[rs2];
            }
            break;
        } case 0x73: {//ebrake
            if(funct_12 == 0x1 && rs1 == 0 && funct_3 == 0 && rd == 0){
                ref_is_ebreak = true;    
                printf("REF EBREAK AT %d\n", ref_steps);
                ref_EXIT_CODE = ref_REG[10];
                if(ref_REG[10] == 0) printf("REF HIT GOOD TRAP\n");
                else printf("REF HIT BAD TRAP\n");
            }
            break;
        } default:{ break; }
    }

    ref_REG[0] = 0;
    ref_PC = next_PC;
    ref_steps ++;
}