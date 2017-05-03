/*
 * RYU INSTRUCTION SET
 */

#ifndef VM_SET_H
#define VM_SET_H

/*
 * Ryu General Purpose Registers
 */

/* Registers */
#define R0   0
#define R1   1
#define R2   2
#define R3   3
#define R4   4
#define R5   5
#define R6   6
#define R7   7
#define R8   8
#define R9   9
#define R10 10
#define R11 11
#define R12 12
#define R13 13
#define R14 14
#define R15 15

#define REG_SIZE 16

/* Instructions */
typedef enum VMInst {
	PUSH_B = 0,
	PUSH_W,
	PUSH_DW,
	PUSH_QW,
	PUSH_DQW,

	POP_B,
	POP_W,
	POP_DW,
	POP_QW,
	POP_DQW,

	MOV_REG_B,
	MOV_REG_W,
	MOV_REG_DW,
	MOV_REG_QW,
	MOV_REG_DQW,

	MOV_MEM_B,
	MOV_MEM_W,
	MOV_MEM_DW,
	MOV_MEM_QW,
	MOV_MEM_DQW,

	MOV_MEM_REG_B,
	MOV_MEM_REG_W,
	MOV_MEM_REG_DW,
	MOV_MEM_REG_QW,
	MOV_MEM_REG_DQW,

	MOV_REG_MEM_B,
	MOV_REG_MEM_W,
	MOV_REG_MEM_DW,
	MOV_REG_MEM_QW,
	MOV_REG_MEM_DQW,

	ADD_U_B,
	ADD_U_W,
	ADD_U_DW,
	ADD_U_QW,
	ADD_U_DQW,

	ADD_S_B,
	ADD_S_W,
	ADD_S_DW,
	ADD_S_QW,
	ADD_S_DQW,

	SUB_U_B,
	SUB_U_W,
	SUB_U_DW,
	SUB_U_QW,
	SUB_U_DQW,

	SUB_S_B,
	SUB_S_W,
	SUB_S_DW,
	SUB_S_QW,
	SUB_S_DQW,

	HALT,
	PRINT_REG,
	PRINT_CHAR,

}VMInst;

#endif
