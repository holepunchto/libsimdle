#include "../include/simd.h"
#include "platform.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_not_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vmvnq_u8(vec.u8);
#else
  for (int i = 0; i < 16; i++) {
    vec.u8[i] = ~vec.u8[i];
  }
#endif

  return vec;
}

simd_v128_t
simd_not_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vmvnq_u16(vec.u16);
#else
  for (int i = 0; i < 8; i++) {
    vec.u16[i] = ~vec.u16[i];
  }
#endif

  return vec;
}

simd_v128_t
simd_not_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vmvnq_u32(vec.u32);
#else
  for (int i = 0; i < 4; i++) {
    vec.u32[i] = ~vec.u32[i];
  }
#endif

  return vec;
}
