#include "../include/simd.h"
#include "platform.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#else
#include <string.h>
#endif

simd_v128_t
simd_load_v128_u8 (const uint8_t arr[]) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM)
  vec.u8 = vld1q_u8(arr);
#else
  memcpy(&vec, arr, sizeof(vec));
#endif

  return vec;
}

simd_v128_t
simd_load_v128_u16 (const uint16_t arr[]) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM)
  vec.u16 = vld1q_u16(arr);
#else
  memcpy(&vec, arr, sizeof(vec));
#endif

  return vec;
}

simd_v128_t
simd_load_v128_u32 (const uint32_t arr[]) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM)
  vec.u32 = vld1q_u32(arr);
#else
  memcpy(&vec, arr, sizeof(vec));
#endif

  return vec;
}
