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

typedef unsigned char Byte;
typedef unsigned short int Word;
typedef unsigned int DWord ;
typedef unsigned long long int QWord;
typedef struct {unsigned long long int l, h;} DQWord;

#endif
