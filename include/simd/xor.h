#ifndef SIMD_XOR_H
#define SIMD_XOR_H

#include "arch.h"
#include "vec.h"

// Bitwise XOR

inline simd_v128_t
simd_xor_v128_u8 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u8 = veorq_u8(a.u8, b.u8);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u8 = _mm_xor_si128(a.u8, b.u8);
#else
  vec.u8 = a.u8 ^ b.u8;
#endif

  return vec;
}

inline simd_v128_t
simd_xor_v128_u16 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u16 = veorq_u16(a.u16, b.u16);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u16 = _mm_xor_si128(a.u16, b.u16);
#else
  vec.u16 = a.u16 ^ b.u16;
#endif

  return vec;
}

inline simd_v128_t
simd_xor_v128_u32 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u32 = veorq_u32(a.u32, b.u32);
#elif defined(SIMD_ARCH_INTEL_SSE2)
  vec.u32 = _mm_xor_si128(a.u32, b.u32);
#else
  vec.u32 = a.u32 ^ b.u32;
#endif

  return vec;
}

#endif // SIMD_XOR_H
