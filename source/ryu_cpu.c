#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#include <ryu_types.h>
#include <ryu_cpu.h>
#include <ryu_stack.h>
#include <memory.h>

RyuCPU*  RyuCPU_new(){
	RyuCPU* cpu = NULL;
	cpu = (RyuCPU*)dmt_calloc(1, sizeof(RyuCPU));
	cpu->programCounter = 0;
	cpu->program = NULL;

	cpu->stack = RyuStack_new();
	
	return cpu;
}

void RyuCPU_delete(struct RyuCPU* cpu){}

void RyuCPU_run(struct RyuCPU* cpu, struct RyuProgram* program) {
	
}


