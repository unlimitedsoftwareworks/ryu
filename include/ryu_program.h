/*
 * RYU PROGRAM
 */

#ifndef RYU_PROGRAM_H
#define RYU_PROGRAM_H

#include <stddef.h>
#include <stdlib.h>

#include <ryu_types.h>
#include <vm_set.h>

typedef struct DataDef {
	enum DataType* datatype;
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
	struct DataSegment* data;
	uint64_t ** code;
	size_t lineCount;
}RyuProgram;



#endif
