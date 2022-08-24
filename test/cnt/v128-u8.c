#include <assert.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u8 = {
      0b00000000,
      0b00000001,
      0b00000011,
      0b00000111,
      0b00001111,
      0b00011111,
      0b00111111,
      0b01111111,
      0b11111111,
    },
  };

  simd_v128_t r = simd_cnt_v128_u8(v);

  assert(r.u8[0] == 0);
  assert(r.u8[1] == 1);
  assert(r.u8[2] == 2);
  assert(r.u8[3] == 3);
  assert(r.u8[4] == 4);
  assert(r.u8[5] == 5);
  assert(r.u8[6] == 6);
  assert(r.u8[7] == 7);
  assert(r.u8[8] == 8);
}
