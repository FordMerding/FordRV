bool check_ebreak(bool ref_ebreak, bool dut_ebreak){
    if(ref_ebreak ^ dut_ebreak){
        return 0;
    }
    return 1;
}

bool check_ram(uint32_t *ref_RAM, uint32_t *dut_RAM){
    for(int i = 0; i < MEMORY_SIZE; i++) {
        if(dut_RAM[i] != ref_RAM[i]){
            // printf("RAM HAS DIFFERENCE\n");     
            printf("RAM HAS DIFFERENCE AT ADDRESS [%x]\n", i);       
            printf("REF = [%x] DUT = [%x]\n", ref_RAM[i], dut_RAM[i]);
            return 0;
        }
    }
    return 1;
}

bool check_reg(uint32_t *ref_REG, uint32_t *dut_REG){
    for(int i = 0; i < REG_NUMBER; i++) {
        if(dut_REG[i] != ref_REG[i]){
            printf("REG HAS DIFFERENCE\n");
            printf("REG ADDR=%x\n", i);       
            printf("REF = [%x] DUT = [%x]\n", ref_REG[i], dut_REG[i]);
            return 0;
        }
    }
    return 1;
}

bool check_VGA(bool ref_VGA_we, uint32_t ref_VGA_x, uint32_t ref_VGA_y, uint32_t ref_VGA_col, bool dut_VGA_we, uint32_t dut_VGA_x, uint32_t dut_VGA_y, uint32_t dut_VGA_col){
    if(dut_VGA_we != ref_VGA_we){
        printf("VGA ENABLE SIGNAL IS DIFFERENT\n");
        printf("REF=%x, DUT=%x\n", ref_VGA_we, dut_VGA_we);
        return 0;
    }
    else if(ref_VGA_we){

        if(dut_VGA_x != ref_VGA_x || dut_VGA_y != ref_VGA_y){
            printf("VGA POSITION IS DIFFERENT\n");
            printf("REF=(%x, %x), DUT=(%x, %x)\n", ref_VGA_x, ref_VGA_y, dut_VGA_x, dut_VGA_y);
            return 0;
        }
        if(dut_VGA_col != ref_VGA_col){
            printf("VGA COLOR SIGNAL IS DIFFERENT\n");
            printf("REF=%x, DUT=%x\n", ref_VGA_col, dut_VGA_col);
            return 0;
        }
    }
    return 1;
}

bool check_pc(uint32_t ref_PC, uint32_t dut_PC){

    if(ref_PC != dut_PC){
        printf("Program counter is different!\nRef PC=%x, Dut PC=%x\n", ref_PC, dut_PC);
        return 0;
    }
    return 1;
}