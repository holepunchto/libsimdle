#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  const uint8_t arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

  simdle_v128_t vec = simdle_load_v128_u8(arr);

  assert(vec.u8[0] == 1);
  assert(vec.u8[1] == 2);
  assert(vec.u8[2] == 3);
  assert(vec.u8[3] == 4);
  assert(vec.u8[4] == 5);
  assert(vec.u8[5] == 6);
  assert(vec.u8[6] == 7);
  assert(vec.u8[7] == 8);
  assert(vec.u8[8] == 9);
  assert(vec.u8[9] == 10);
  assert(vec.u8[10] == 11);
  assert(vec.u8[11] == 12);
  assert(vec.u8[12] == 13);
  assert(vec.u8[13] == 14);
  assert(vec.u8[14] == 15);
  assert(vec.u8[15] == 16);
}
