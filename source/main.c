#include <stdio.h>
#include <stdlib.h>

#include <memory.h>

#include <ryu.h>
#include <ryu_cpu.h>
#include <ryu_program.h>
#include <ryu_stack.h>
#include <vm_set.h>

int main(int argc, char* argv[]) {
	printf(RYU_CMD_PROMPT, RYU_VERSION);
	
	RyuCPU* cpu = RyuCPU_new();
	
	RyuProgram program;
	program.data = NULL;
	program.code = dmt_calloc(4, sizeof(uint64_t*));
	
	program.code[0] = dmt_calloc(3, sizeof(uint64_t));
	program.code[0][0] = PUSH_B;
	program.code[0][1] = 10;
	
	program.code[1] = dmt_calloc(3, sizeof(uint64_t));
	program.code[1][0] = POP_B;
	program.code[1][1] = R15;

	program.code[2] = dmt_calloc(3, sizeof(uint64_t));
	program.code[2][0] = PRINT_REG;
	program.code[2][1] = R15;
	
	program.code[3] = dmt_calloc(3, sizeof(uint64_t));
	program.code[3][0] = HALT;
	
	
	
	program.lineCount = 4;
	
	RyuCPU_run(cpu, &program);
	
	return 0;
}
