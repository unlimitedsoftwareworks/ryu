/*
 * RYU STACK
 */

#ifndef RYU_STACK_H
#define RYU_STACK_H

#include <stddef.h>
#include <ryu_types.h>

#define INIT_STACK_SIZE 1024*1024
#define MAX_STACK_SIZE 1024*1024*50

typedef struct RyuStack {
	long long currentSize;
	long long stackPointer;
	Byte* mem;
}RyuStack;

RyuStack* RyuStack_new();
void RyuStack_delete(RyuStack*);

void pushB(RyuStack* stack, Byte data);
void pushW(RyuStack* stack, Word data);
void pushDW(RyuStack* stack, DWord data);
void pushQW(RyuStack* stack, QWord data);
void pushDQW(RyuStack* stack, DQWord data);

Byte*   popB(RyuStack* stack);
Word*   popW(RyuStack* stack);
DWord*  popDW(RyuStack* stack);
QWord*  popQW(RyuStack* stack);
DQWord* popDQW(RyuStack* stack);

#endif
