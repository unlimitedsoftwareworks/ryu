/*
 * RYU CPU
 * A computational unit responsible for executing a program.
 */

#ifndef RYU_CPU_H
#define RYU_CPU_H

#include <stddef.h>

#include <ryu_types.h>
#include <ryu_stack.h>
#include <ryu_program.h>

typedef struct RyuCPU {
	size_t programCounter;
	struct RyuProgram* program;
	RyuStack* stack;
}RyuCPU;

RyuCPU* RyuCPU_new();
void RyuCPU_delete(RyuCPU* cpu);
void RyuCPU_run(RyuCPU* cpu, RyuProgram* program);

#endif
