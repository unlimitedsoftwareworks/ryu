#include <stddef.h>
#include <string.h>

#include <memory.h>
#include <ryu_types.h>
#include <ryu_stack.h>

#define INIT_STACK_SIZE 1024*1024
#define MAX_STACK_SIZE 1024*1024*50

RyuStack* RyuStack_new() {
	RyuStack* stack = NULL;
	stack = dmt_calloc(1, sizeof(RyuStack));
	stack->currentSize = INIT_STACK_SIZE;
	stack->stackPointer = 0;
	stack->mem = dmt_calloc(INIT_STACK_SIZE, sizeof(unsigned char));
	return stack;
}

void RyuStack_delete(RyuStack* stack){}

void pushB(RyuStack* stack, Byte data){
	/* TODO: Bounds checking */
	memcpy((stack->mem+stack->stackPointer), &data, 1);
	stack->stackPointer ++;
}

void pushW(RyuStack* stack, Word data) {
	/* TODO: Bounds checking */
	memcpy((stack->mem+stack->stackPointer), &data, 2);
	stack->stackPointer += 2;
}

void pushDW(RyuStack* stack, DWord data) {
	/* TODO: Bounds checking */
	memcpy((stack->mem+stack->stackPointer), &data, 4);
	stack->stackPointer += 4;
}

void pushQW(RyuStack* stack, QWord data) {
	/* TODO: Bounds checking */
	memcpy((stack->mem+stack->stackPointer), &data, 8);
	stack->stackPointer += 8;
}

void pushDQW(RyuStack* stack, DQWord data) {
	/* TODO: Bounds checking */
	memcpy((stack->mem+stack->stackPointer), &data, 16);
	stack->stackPointer += 16;
}

Byte*   popB(RyuStack* stack) {
	/* TODO: Bounds checking */
	stack->stackPointer--;
	Byte* data = dmt_calloc(1, sizeof(Byte));
	memcpy(data, (stack->mem+stack->stackPointer), 1);
	return data;
}

Word*   popW(RyuStack* stack) {
	/* TODO: Bounds checking */
	stack->stackPointer-=2;
	Word* data = dmt_calloc(1, sizeof(Word));
	memcpy(data, (stack->mem+stack->stackPointer), 2);
	return data;
}

DWord*  popDW(RyuStack* stack) {
	/* TODO: Bounds checking */
	stack->stackPointer-=4;
	DWord* data = dmt_calloc(1, sizeof(DWord));
	memcpy(data, (stack->mem+stack->stackPointer), 4);
	return data;
}

QWord*  popQW(RyuStack* stack) {
	/* TODO: Bounds checking */
	stack->stackPointer-=8;
	QWord* data = dmt_calloc(1, sizeof(QWord));
	memcpy(data, (stack->mem+stack->stackPointer), 8);
	return data;
}

DQWord* popDQW(RyuStack* stack) {
	/* TODO: Bounds checking */
	stack->stackPointer-=16;
	DQWord* data = dmt_calloc(1, sizeof(DQWord));
	memcpy(data, (stack->mem+stack->stackPointer), 16);
	return data;
}
