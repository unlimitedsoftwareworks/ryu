#include <stdio.h>
#include <stdlib.h>

#include <memory.h>

#include <ryu.h>
#include <ryu_cpu.h>
#include <ryu_program.h>
#include <ryu_stack.h>

int main(int argc, char* argv[]) {
  printf(RYU_CMD_PROMPT, RYU_VERSION);
  RyuCPU* cpu = RyuCPU_new();
  
  Byte* c0 = dmt_calloc(1, sizeof(Byte));
  *c0 = 'A';
  Byte* c1 = dmt_calloc(1, sizeof(Byte));
  *c1 = 'B';
  
  DQWord w = {.h = -2, .l = -1};
  
  pushB(cpu->stack, *c0);
  pushW(cpu->stack, 32);
  pushW(cpu->stack, 64);
  pushB(cpu->stack, *c1);
  pushDQW(cpu->stack, w);
  
  
  DQWord *dqw = popDQW(cpu->stack);
  Byte* d0 = popB(cpu->stack);
  Word* d1 = popW(cpu->stack);
  Word* d2 = popW(cpu->stack);
  Byte* d3 = popB(cpu->stack);
  
  printf("(%lu, %lu), %c, %d, %d, %c\n", dqw->h, dqw->l, *d0, *d1, *d2, *d3);
  
  return 0;
}
