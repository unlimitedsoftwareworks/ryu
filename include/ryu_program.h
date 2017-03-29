/*
 * RYU PROGRAM
 */

#ifndef RYU_PROGRAM_H
#define RYU_PROGRAM_H

typedef enum DataType {
	DT_BYTE=0,
	DT_WORD,
	DT_DOUBLE_WORD,
	DT_QUAD_WORD,
	DT_ARRAY,
};

typedef struct DataDef {
    DataType* datatype;
	void* value;
	
	union{
		/* size in case of array */
		unsigned long size;
	};
};

typedef struct DataSegment{
    
};

typedef struct RyuProgram {
    
};

#endif
