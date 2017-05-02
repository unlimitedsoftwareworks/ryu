#include <ryu_utils.h>

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
}

bin(uint8_Bin, uint8_t)
bin(uint16_Bin, uint16_t)
bin(uint32_Bin, uint32_t)
bin(uint64_Bin, uint64_t)
