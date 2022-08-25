#include <assert.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u8 = {
      0b00000000,
      0b10000000,
      0b11000000,
      0b11100000,
      0b11110000,
      0b11111000,
      0b11111100,
      0b11111110,
      0b11111111,
    },
  };

  simd_v128_t r = simd_ctz_v128_u8(v);

  assert(r.u8[0] == 8);
  assert(r.u8[1] == 7);
  assert(r.u8[2] == 6);
  assert(r.u8[3] == 5);
  assert(r.u8[4] == 4);
  assert(r.u8[5] == 3);
  assert(r.u8[6] == 2);
  assert(r.u8[7] == 1);
  assert(r.u8[8] == 0);
}
