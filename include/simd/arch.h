#ifndef SIMD_ARCH_H
#define SIMD_ARCH_H

#if defined(__aarch64__) && defined(__ARM_NEON)
#define SIMD_ARCH_ARM
#else
#define SIMD_ARCH_GENERIC
#endif

#endif // SIMD_ARCH_H
