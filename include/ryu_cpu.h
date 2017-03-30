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
	RyuProgram* program;
	RyuStack* stack;
};

void cpu_run(RyuCPU* cpu, RyuProgram* program);

#endif
