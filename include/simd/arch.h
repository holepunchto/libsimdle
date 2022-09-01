#ifndef SIMD_ARCH_H
#define SIMD_ARCH_H

// Architecture

#if defined(__aarch64__)
#define SIMD_ARCH_ARM
#elif defined(__x86_64__)
#define SIMD_ARCH_INTEL
#else
#define SIMD_ARCH_GENERIC
#endif

// Features

#if defined(SIMD_ARCH_ARM)
#if defined(__ARM_NEON)
#define SIMD_ARCH_ARM_NEON
#endif
#endif

#if defined(SIMD_ARCH_INTEL)
#if defined(__SSE2__)
#define SIMD_ARCH_INTEL_SSE2
#endif
#if defined(__AVX__)
#define SIMD_ARCH_INTEL_AVX
#endif
#if defined(__AVX512CD__)
#define SIMD_ARCH_INTEL_AVX512CD
#endif
#if defined(__AVX512VL__)
#define SIMD_ARCH_INTEL_AVX512VL
#endif
#if defined(__AVX512BITALG__)
#define SIMD_ARCH_INTEL_AVX512BITALG
#endif
#if defined(__AVX512VPOPCNTDQ__)
#define SIMD_ARCH_INTEL_AVX512VPOPCNTDQ
#endif
#if defined(__BMI__)
#define SIMD_ARCH_INTEL_BMI
#endif
#endif

// Includes

#if defined(SIMD_ARCH_ARM_NEON)
#include <arm_neon.h>
#endif

#if defined(SIMD_ARCH_INTEL_AVX) || defined(SIMD_ARCH_INTEL_BMI)
#include <immintrin.h>
#elif defined(SIMD_ARCH_INTEL_SSE2)
#include <emmintrin.h>
#endif

#endif // SIMD_ARCH_H
