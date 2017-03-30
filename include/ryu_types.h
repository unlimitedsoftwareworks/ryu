/*
 * RYU TYPES
 */
 
#ifndef RYU_TYPES
#define RYU_TYPES
 
typedef enum DataType {
	DT_BYTE=0,
	DT_WORD,
	DT_DWORD,
	DT_QWORD,
	DT_QDWORD,
	DT_ARRAY,
};

typedef Byte unsigned char;
typedef Word unsigned short int;
typedef DWord unsigned int;
typedef QWord unsigned long int;
typedef DQWord unsigned long long int;

#endif
