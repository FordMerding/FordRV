// #include <nvboard.h>

#include "utils.h"

#include "minirvEMU.h"
#include "verilogDUT.h"
#include "difftest.h"

#include <stdio.h>

uint32_t sim_steps = 0;

bool is_pass = true;
bool is_running_sim = true;

int main(int argc, char** argv){
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    #ifdef MINIRV_NPC
    printf("MINIRV_NPC IS USING!!!!\n");
    top = new VEXTERNAL_TOP{contextp};
    #else
    printf("MINIRV_YSYXSOC IS USING!!!!\n");
    top = new VSimTop{contextp};
    #endif

    // nvboard_bind_all_pins(top);
    // nvboard_init();
    
    if(argc < 2){
        printf("NO PROGRAMM AT INPUT");
        return 1;
    }
    std::string my_program = argv[1];
    loadBin(my_program, dut_FLSH);
    
    dut_reset(200);

    bool check_pending = false;

    while(is_running_sim){
        // nvboard_update();
        

        if(!dut_is_ebreak) dut_step();
        
        if(dut_UART_valid) {
            SET_UART_READY(dut_UART_ready);
        }

        if(ref_is_ebreak | dut_is_ebreak) is_running_sim = false;
        else sim_steps++;
    }
    
    printf("FINISHING AT STEP %d\n", sim_steps);
    printf("IPC: %f\n", (float)(dut_executed_inst)/(float)dut_steps);
    if(is_pass){
        printf("PASS PASS PASS PASS\n");
    }
    else{
        ref_EXIT_CODE = 67;
        printf("FAIL FAIL FAIL FAIL\n");
    }
    delete top;
    delete contextp;
    return dut_EXIT_CODE | ref_EXIT_CODE;
}
