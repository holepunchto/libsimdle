#include "../include/simd.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_cnt_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vcntq_u8(vec.u8);
#else
  vec.u8 -= ((vec.u8 >> 1) & 0x55);
  vec.u8 = ((vec.u8 & 0x33) + ((vec.u8 >> 2) & 0x33));
  vec.u8 = (vec.u8 + (vec.u8 >> 4)) & 0xf;
#endif

  return vec;
}

simd_v128_t
simd_cnt_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vpaddlq_u8(vcntq_u8(vec.u8));
#else
  vec.u16 -= ((vec.u16 >> 1) & 0x5555);
  vec.u16 = ((vec.u16 & 0x3333) + ((vec.u16 >> 2) & 0x3333));
  vec.u16 = (vec.u16 + (vec.u16 >> 4)) & 0xf0f;
  vec.u16 = (vec.u16 * 0x101) >> 8;
#endif

  return vec;
}

simd_v128_t
simd_cnt_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vpaddlq_u16(vpaddlq_u8(vcntq_u8(vec.u8)));
#else
  vec.u32 -= ((vec.u32 >> 1) & 0x55555555);
  vec.u32 = ((vec.u32 & 0x33333333) + ((vec.u32 >> 2) & 0x33333333));
  vec.u32 = (vec.u32 + (vec.u32 >> 4)) & 0xf0f0f0f;
  vec.u32 = (vec.u32 * 0x1010101) >> 24;
#endif

  return vec;
}
