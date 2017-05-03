#ifndef RYU_UTILS_H
#define RYU_UTILS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

#include <ryu_program.h>

/**
 * Converts a uint8_t to Binary String. Result stored in dest parameter
 * @param n uint8_t number
 * @param dest must be large enough to contain 2^8 characeters + 1 for  line ending '\0'
 */
void uint8_Bin(uint8_t n, uint8_t* dest);

/**
 * Converts a uint16_t to Binary String. Result stored in dest parameter
 * @param n uint16_t number
 * @param dest must be large enough to contain 2^16 characeters + 1 for  line ending '\0'
 */
void uint16_Bin(uint16_t n, uint8_t* dest);

/**
 * Converts a uint32_t to Binary String. Result stored in dest parameter
 * @param n uint32_t number
 * @param dest must be large enough to contain 2^32 characeters + 1 for  line ending '\0'
 */
void uint32_Bin(uint32_t n, uint8_t* dest);

/**
 * Converts a uint64_t to Binary String. Result stored in dest parameter
 * @param n uint64_t number
 * @param dest must be large enough to contain 2^64 characeters + 1 for  line ending '\0'
 */
void uint64_Bin(uint64_t n, uint8_t* dest);

/**
 * Appends an instruction to a program's code.
 * @param program Program structure
 * @param i instruction
 * @param a1 Argument 1
 * @param a2 Argument 2
 */
void addInstruction(struct RyuProgram *program, uint64_t i, uint64_t a1, uint64_t a2);

#endif
