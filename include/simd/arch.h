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
#endif

// Includes

#if defined(SIMD_ARCH_ARM_NEON)
#include <arm_neon.h>
#endif

#if defined(SIMD_ARCH_INTEL_SSE2)
#include <emmintrin.h>
#endif

#endif // SIMD_ARCH_H
