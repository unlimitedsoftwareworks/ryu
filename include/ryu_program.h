/*
 * RYU PROGRAM
 */

#ifndef RYU_PROGRAM_H
#define RYU_PROGRAM_H

typedef struct DataDef {
	DataType* datatype;
	void* value;
	
	union{
		/* size in case of array */
		unsigned long size;
	};
};

typedef struct DataSegment{
	void* data;
	size_t size;
};

typedef struct RyuProgram {
	DataSegment* data;
	size_t* code;
};

#endif
