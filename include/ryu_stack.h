/*
 * RYU STACK
 */

#ifndef RYU_STACK_H
#define RYU_STACK_H

#include <ryu_types.h>

#define INIT_STACK_SIZE 1024*1024
#define MAX_STACK_SIZE 1024*1024*50

typedef struct RyuStack {
	size_t currentSize;
	void* mem;
};

void pushB(Byte data);
void pushW(Word data);
void pushDW(DWord data);
void pushQW(QWord data);
void pushDQW(DQWord data);

Byte   popB();
Word   popW();
DWord  popDW();
QWord  popQW();
DQWord popDQW();

#endif
