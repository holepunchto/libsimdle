#include <assert.h>

#include "../../include/simd.h"

int
main () {
  const uint16_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

  simd_v128_t vec = simd_load_v128_u16(arr);

  assert(vec.u16[0] == 1);
  assert(vec.u16[1] == 2);
  assert(vec.u16[2] == 3);
  assert(vec.u16[3] == 4);
  assert(vec.u16[4] == 5);
  assert(vec.u16[5] == 6);
  assert(vec.u16[6] == 7);
  assert(vec.u16[7] == 8);
}
