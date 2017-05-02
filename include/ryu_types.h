/*
 * RYU TYPES
 */
 
#ifndef RYU_TYPES
#define RYU_TYPES
 
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
 
typedef enum DataType {
	DT_BYTE=0,
	DT_WORD,
	DT_DWORD,
	DT_QWORD,
	DT_QDWORD,
	DT_ARRAY,
}DataType;

typedef uint8_t Byte;
typedef uint16_t Word;
typedef uint32_t DWord ;
typedef uint64_t QWord;
typedef struct {uint64_t l, h;} DQWord;

#endif
