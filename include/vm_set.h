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
#define PUSH_B   0
#define PUSH_W   1
#define PUSH_DW  2
#define PUSH_QW  3
#define PUSH_DQW 4

#define POP_B   10
#define POP_W   11
#define POP_DW  12
#define POP_QW  13
#define POP_DQW 14

#define MOV_REG_B   20
#define MOV_REG_W   21
#define MOV_REG_DW  22
#define MOV_REG_QW  23
#define MOV_REG_DQW 24

#define MOV_MEM_B   30
#define MOV_MEM_W   31
#define MOV_MEM_DW  32
#define MOV_MEM_QW  33
#define MOV_MEM_DQW 34

#define MOV_MEM_REG_B   40
#define MOV_MEM_REG_W   41
#define MOV_MEM_REG_DW  42
#define MOV_MEM_REG_QW  43
#define MOV_MEM_REG_DQW 44

#define MOV_REG_MEM_B   50
#define MOV_REG_MEM_W   51
#define MOV_REG_MEM_DW  52
#define MOV_REG_MEM_QW  53
#define MOV_REG_MEM_DQW 54

#define ADD_U_B   60
#define ADD_U_W   61
#define ADD_U_DW  62
#define ADD_U_QW  63
#define ADD_U_DQW 64

#define ADD_S_B   70
#define ADD_S_W   71
#define ADD_S_DW  72
#define ADD_S_QW  73
#define ADD_S_DQW 74

#define SUB_U_B   60
#define SUB_U_W   61
#define SUB_U_DW  62
#define SUB_U_QW  63
#define SUB_U_DQW 64

#define SUB_S_B   70
#define SUB_S_W   71
#define SUB_S_DW  72
#define SUB_S_QW  73
#define SUB_S_DQW 74

#define HALT 80
#define PRINT_REG 81

#endif
