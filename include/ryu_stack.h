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

struct RyuStack* RyuStack_new();
void RyuStack_delete(struct RyuStack*);

void pushB(struct RyuStack* stack, Byte data);
void pushW(struct RyuStack* stack, Word data);
void pushDW(struct RyuStack* stack, DWord data);
void pushQW(struct RyuStack* stack, QWord data);
//void pushDQW(struct RyuStack* stack, DQWord data);

Byte*   popB(struct RyuStack* stack);
Word*   popW(struct RyuStack* stack);
DWord*  popDW(struct RyuStack* stack);
QWord*  popQW(struct RyuStack* stack);
//DQWord* popDQW(struct RyuStack* stack);

#endif
