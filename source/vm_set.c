#include "ryu.h"
#include "vm_set.h"


HANDLE(PUSH_B) {
	pushB(cpu->stack, program->code[cpu->ip][1]);
}

unsigned int buildInstruction(unsigned char instruction, unsigned char arg1, unsigned char arg2) {
	
}