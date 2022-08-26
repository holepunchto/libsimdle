#include <assert.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u32 = {
      0b00000000000000000000000000000001,
      0b00000000000000000000000000000011,
      0b00000000000000000000000000000111,
      0b00000000000000000000000000001111,
    },
  };

  simd_v128_t r = simd_not_v128_u32(v);

  assert(r.u32[0] == 0b11111111111111111111111111111110);
  assert(r.u32[1] == 0b11111111111111111111111111111100);
  assert(r.u32[2] == 0b11111111111111111111111111111000);
  assert(r.u32[3] == 0b11111111111111111111111111110000);
}