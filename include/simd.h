#ifndef SIMD_H
#define SIMD_H

#ifdef __cplusplus
extern "C" {
#endif

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

#include "simd/clo.h"
#include "simd/clz.h"
#include "simd/cnt.h"
#include "simd/cto.h"
#include "simd/ctz.h"
#include "simd/load.h"
#include "simd/not.h"
#include "simd/sum.h"

#ifdef __cplusplus
}
#endif
#endif // SIMD_H
