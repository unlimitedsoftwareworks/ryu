#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include <memory.h>
#include <ryu_utils.h>
#include <ryu_program.h>
#include <vm_set.h>

#define bin(name, t) void name(t n, uint8_t* dest) { \
  size_t size = sizeof(t) * 8;\
  t counter = 0;\
  while(n){\
    if(n & 1)  \
      dest[counter] = '1';\
    else \
      dest[counter] = '0';\
    n >>= 1;\
    counter++;\
  }\
  inplace_reverse(dest);\
}

// FROM http://stackoverflow.com/questions/784417/reversing-a-string-in-c
// reverse the given null-terminated string in place
void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;

    // swap the values in the two given variables
    // XXX: fails when a and b refer to same memory location
#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    // walk inwards from both ends of the string, 
    // swapping until we get to the middle
    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}

bin(uint8_Bin, uint8_t)
bin(uint16_Bin, uint16_t)
bin(uint32_Bin, uint32_t)
bin(uint64_Bin, uint64_t)


void addInstruction(struct RyuProgram *program, uint64_t i, uint64_t a1, uint64_t a2){
	program->lineCount++;
	program->code = dmt_realloc(program->code, program->lineCount*sizeof(uint64_t**));
	program->code[program->lineCount-1] = dmt_calloc(3, sizeof(uint64_t));
	program->code[program->lineCount-1][0] = i;
	program->code[program->lineCount-1][1] = a1;
	program->code[program->lineCount-1][2] = a2;
}
