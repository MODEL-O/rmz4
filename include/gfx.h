#ifndef GUARD_RMZ4_GFX_H
#define GUARD_RMZ4_GFX_H

#include "types.h"

#define COLOR 2

// Graphic.props / ColorGraphic flags
#define MAP2D (1 << 0)
#define LZ77 0x0002
#define NO_PAL 0x0004
#define BPP4 0x0020
#define BPP8 0x0040
#define RLU (1 << (4 + 8))

// tile data starts from `(u8 *)&src + src`
struct Graphic {
  s32 src;
  u32 size : 22;  // byte count
  u32 ofs : 10;   // destination VRAM tile id
  u16 chunkSize;  // row size; unused when linear (1D)
  u16 props;
};
_Static_assert(sizeof(struct Graphic) == 12, "");

// palette data starts from `(void *)&src + src`
struct Palette {
  u32 src;
  u16 size;    // byte count
  bool8 lz77;  // lz77 compressed?
  u8 dst;      // palette id (0..15)
};
_Static_assert(sizeof(struct Palette) == 8, "");

struct ColorGraphic {
  struct Graphic g;
  struct Palette pal;
};
_Static_assert(sizeof(struct ColorGraphic) == 20, "");

#endif  // GUARD_RMZ4_GFX_H
