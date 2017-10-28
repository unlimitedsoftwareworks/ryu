/*
 * RYU CPU
 * A computational unit responsible for executing a program.
 */

#ifndef RYU_CPU_H
#define RYU_CPU_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

#include <ryu_types.h>
#include <ryu_stack.h>
#include <ryu_program.h>

typedef struct RyuCPU {
	uint8_t running;
	// instruction pointer
	uint64_t ip;
	struct RyuProgram* program;
	struct RyuStack* stack;
	uint64_t regs[16];
}RyuCPU;

struct RyuCPU* RyuCPU_new();
void RyuCPU_delete(struct RyuCPU* cpu);
void RyuCPU_run(struct RyuCPU* cpu, struct RyuProgram* program);

#endif
