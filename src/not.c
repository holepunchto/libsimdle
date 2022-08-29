#include "../include/simd.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_not_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vmvnq_u8(vec.u8);
#else
  vec.u8 = ~vec.u8;
#endif

  return vec;
}

simd_v128_t
simd_not_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vmvnq_u16(vec.u16);
#else
  vec.u16 = ~vec.u16;
#endif

  return vec;
}

simd_v128_t
simd_not_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vmvnq_u32(vec.u32);
#else
  vec.u32 = ~vec.u32;
#endif

  return vec;
}
