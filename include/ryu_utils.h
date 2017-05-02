#ifndef RYU_UTILS_H
#define RYU_UTILS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

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


#endif
