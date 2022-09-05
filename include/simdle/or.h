#ifndef SIMDLE_OR_H
#define SIMDLE_OR_H

#include "arch.h"
#include "vec.h"

// Bitwise OR

inline simdle_v128_t
simdle_or_v128_u8 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u8 = vorrq_u8(a.u8, b.u8);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.u8 = _mm_or_si128(a.u8, b.u8);
#else
  vec.u8 = a.u8 | b.u8;
#endif

  return vec;
}

inline simdle_v128_t
simdle_or_v128_u16 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u16 = vorrq_u16(a.u16, b.u16);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.u16 = _mm_or_si128(a.u16, b.u16);
#else
  vec.u16 = a.u16 | b.u16;
#endif

  return vec;
}

inline simdle_v128_t
simdle_or_v128_u32 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u32 = vorrq_u32(a.u32, b.u32);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.u32 = _mm_or_si128(a.u32, b.u32);
#else
  vec.u32 = a.u32 | b.u32;
#endif

  return vec;
}

#endif // SIMDLE_OR_H
