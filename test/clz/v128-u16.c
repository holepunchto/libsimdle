#include <assert.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u16 = {
      0b0000000000000001,
      0b0000000000000011,
      0b0000000000000111,
      0b0000000000001111,
      0b0000000000011111,
      0b0000000000111111,
      0b0000000001111111,
      0b0000000011111111,
    },
  };

  simd_v128_t r = simd_clz_v128_u16(v);

  assert(r.u16[0] == 15);
  assert(r.u16[1] == 14);
  assert(r.u16[2] == 13);
  assert(r.u16[3] == 12);
  assert(r.u16[4] == 11);
  assert(r.u16[5] == 10);
  assert(r.u16[6] == 9);
  assert(r.u16[7] == 8);
}
