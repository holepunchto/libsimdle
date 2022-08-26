#ifndef PLATFORM_H
#define PLATFORM_H

#if defined(__aarch64__) && defined(__ARM_NEON)
#define SIMD_ARCH_ARM
#else
#define SIMD_ARCH_GENERIC
#endif

#endif // PLATFORM_H
