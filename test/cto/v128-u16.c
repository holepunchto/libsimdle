#include <assert.h>
#include <stdio.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u16 = {
      0b0111111111111111,
      0b0011111111111111,
      0b0001111111111111,
      0b0000111111111111,
      0b0000011111111111,
      0b0000001111111111,
      0b0000000111111111,
      0b0000000011111111,
    },
  };

  simd_v128_t r = simd_cto_v128_u16(v);

  assert(r.u16[0] == 15);
  assert(r.u16[1] == 14);
  assert(r.u16[2] == 13);
  assert(r.u16[3] == 12);
  assert(r.u16[4] == 11);
  assert(r.u16[5] == 10);
  assert(r.u16[6] == 9);
  assert(r.u16[7] == 8);
}
