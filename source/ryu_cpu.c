#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <memory.h>

#include <ryu_types.h>
#include <ryu_cpu.h>
#include <ryu_stack.h>
#include <vm_set.h>
#include <ryu_utils.h>

RyuCPU*  RyuCPU_new(){
	RyuCPU* cpu = NULL;
	cpu = (RyuCPU*)dmt_calloc(1, sizeof(RyuCPU));
	cpu->ip = 0;
	cpu->program = NULL;
	cpu->running = 0;
	
	cpu->stack = RyuStack_new();
	//cpu->regs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	return cpu;
}

void RyuCPU_delete(struct RyuCPU* cpu){}

void RyuCPU_run(struct RyuCPU* cpu, struct RyuProgram* program) {
	printf("Starting CPU\n");
	cpu->running = 1;
	
	for(cpu->ip = 0; cpu->running != 0; cpu->ip++) {
		switch(program->code[cpu->ip][0]) {
			case PUSH_B:{
				pushB(cpu->stack, program->code[cpu->ip][1]);
				break;
			}
			case POP_B: {
				Byte* c0 = popB(cpu->stack);
				cpu->regs[program->code[cpu->ip][1]] = *c0;
                dmt_free(c0);
				break;
			}
			case HALT: {
				cpu->running = 0;
				break;
			}
			case PRINT_REG: {
				uint8_t reg = program->code[cpu->ip][1];
				uint64_t v = cpu->regs[reg];
				uint8_t tmp[10]= {'\0'};
				uint64_Bin(v, tmp);
				printf("R%d: %s", reg, tmp);
			}
			case PRINT_CHAR: {
				printf("%c", program->code[cpu->ip][1]);
			}
		}
	}
	
	printf("Stopping CPU\n");
}


