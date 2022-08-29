#ifndef SIMD_COMMON_H
#define SIMD_COMMON_H

#include <stdint.h>

#if defined(__aarch64__) && defined(__ARM_NEON)
#define SIMD_ARCH_ARM
#else
#define SIMD_ARCH_GENERIC
#endif

typedef uint8_t simd_u8x16_t __attribute__((vector_size(16)));
typedef uint16_t simd_u16x8_t __attribute__((vector_size(16)));
typedef uint32_t simd_u32x4_t __attribute__((vector_size(16)));
typedef uint64_t simd_u64x2_t __attribute__((vector_size(16)));

typedef union simd_v128_u simd_v128_t;

union simd_v128_u {
  simd_u8x16_t u8;
  simd_u16x8_t u16;
  simd_u32x4_t u32;
  simd_u64x2_t u64;
};

#endif // SIMD_COMMON_H
