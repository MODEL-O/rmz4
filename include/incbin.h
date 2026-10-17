// https://gist.github.com/mmozeiko/ed9655cf50341553d282

#ifndef GUARD_RMZ4_INCBIN_H
#define GUARD_RMZ4_INCBIN_H

#include "types.h"

#define STR2(x) #x
#define STR(x) STR2(x)

#define INCBIN(file)       \
  __asm__(                 \
      ".section .rodata\n" \
      ".incbin \"" file "\"\n");

#define INCBIN8(name, file)         \
  __asm__(".section .rodata\n"      \
          ".global " STR(name) "\n" \
          STR(name) ":\n"           \
          ".incbin \"" file "\"\n"); \
  extern const u8* name;

#define INCBIN16(name, file)        \
  __asm__(".section .rodata\n"      \
          ".global " STR(name) "\n" \
          ".balign 2\n"             \
          STR(name) ":\n"           \
          ".incbin \"" file "\"\n"); \
  extern const u16* name;

#endif  // GUARD_RMZ4_INCBIN_H
