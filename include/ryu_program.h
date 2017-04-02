/*
 * RYU PROGRAM
 */

#ifndef RYU_PROGRAM_H
#define RYU_PROGRAM_H

#include <stddef.h>
#include <stdlib.h>

#include <ryu_types.h>

typedef struct DataDef {
	DataType* datatype;
	void* value;
	
	union{
		/* size in case of array */
		unsigned long size;
	};
}DataDef;

typedef struct DataSegment{
	void* data;
	size_t size;
}DataSegment;

typedef struct RyuProgram {
	DataSegment* data;
	size_t* code;
}RyuProgram;

#endif
