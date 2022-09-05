#ifndef SIMDLE_CNT_H
#define SIMDLE_CNT_H

#include "arch.h"
#include "vec.h"

// Population count (cnt)

inline simdle_v128_t
simdle_cnt_v128_u8 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u8 = vcntq_u8(vec.u8);
#elif defined(SIMDLE_ARCH_INTEL_AVX512BITALG) && defined(SIMDLE_ARCH_INTEL_AVX512VL)
  vec.u8 = _mm_popcnt_epi8(vec.u8);
#else
  vec.u8 -= ((vec.u8 >> 1) & 0x55);
  vec.u8 = ((vec.u8 & 0x33) + ((vec.u8 >> 2) & 0x33));
  vec.u8 = (vec.u8 + (vec.u8 >> 4)) & 0xf;
#endif

  return vec;
}

inline simdle_v128_t
simdle_cnt_v128_u16 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u16 = vpaddlq_u8(vcntq_u8(vec.u8));
#elif defined(SIMDLE_ARCH_INTEL_AVX512BITALG) && defined(SIMDLE_ARCH_INTEL_AVX512VL)
  vec.u16 = _mm_popcnt_epi16(vec.u16);
#else
  vec.u16 -= ((vec.u16 >> 1) & 0x5555);
  vec.u16 = ((vec.u16 & 0x3333) + ((vec.u16 >> 2) & 0x3333));
  vec.u16 = (vec.u16 + (vec.u16 >> 4)) & 0xf0f;
  vec.u16 = (vec.u16 * 0x101) >> 8;
#endif

  return vec;
}

inline simdle_v128_t
simdle_cnt_v128_u32 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u32 = vpaddlq_u16(vpaddlq_u8(vcntq_u8(vec.u8)));
#elif defined(SIMDLE_ARCH_INTEL_AVX512VPOPCNTDQ) && defined(SIMDLE_ARCH_INTEL_AVX512VL)
  vec.u32 = _mm_popcnt_epi32(vec.u32);
#else
  vec.u32 -= ((vec.u32 >> 1) & 0x55555555);
  vec.u32 = ((vec.u32 & 0x33333333) + ((vec.u32 >> 2) & 0x33333333));
  vec.u32 = (vec.u32 + (vec.u32 >> 4)) & 0xf0f0f0f;
  vec.u32 = (vec.u32 * 0x1010101) >> 24;
#endif

  return vec;
}

#endif // SIMDLE_CNT_H
