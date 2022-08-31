#ifndef SIMD_NOT_H
#define SIMD_NOT_H

#include "arch.h"
#include "vec.h"

// Bitwise NOT

inline simd_v128_t
simd_not_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u8 = vmvnq_u8(vec.u8);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u8 = _mm_xor_si128(vec.u8, _mm_cmpeq_epi8(vec.u8, vec.u8));
#else
  vec.u8 = ~vec.u8;
#endif

  return vec;
}

inline simd_v128_t
simd_not_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u16 = vmvnq_u16(vec.u16);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u16 = _mm_xor_si128(vec.u16, _mm_cmpeq_epi16(vec.u16, vec.u16));
#else
  vec.u16 = ~vec.u16;
#endif

  return vec;
}

inline simd_v128_t
simd_not_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u32 = vmvnq_u32(vec.u32);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u32 = _mm_xor_si128(vec.u32, _mm_cmpeq_epi32(vec.u32, vec.u32));
#else
  vec.u32 = ~vec.u32;
#endif

  return vec;
}

#endif // SIMD_NOT_H
