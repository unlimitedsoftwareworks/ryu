#include <stdio.h>
#include <stdlib.h>

#include <memory.h>

#include <ryu.h>
#include <ryu_cpu.h>
#include <ryu_program.h>
#include <ryu_stack.h>
#include <ryu_utils.h>
#include <vm_set.h>

int main(int argc, char* argv[]) {
	printf(RYU_CMD_PROMPT, RYU_VERSION);
	
	RyuCPU* cpu0 = RyuCPU_new();
	
	RyuProgram program0;
	program0.data = NULL;
	program0.lineCount = 0;
	program0.code = dmt_calloc(1, sizeof(uint64_t**));
	
	addInstruction(&program0, PUSH_B, 255, 0);
	addInstruction(&program0, POP_B, R15, 0);
	addInstruction(&program0, PRINT_REG, R15, 0);
	addInstruction(&program0, PRINT_CHAR, '\n', 0);
	addInstruction(&program0, HALT, 0, 0);
	
	RyuCPU_run(cpu0, &program0);
	
	return 0;
}
