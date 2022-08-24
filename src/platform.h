#ifndef PLATFORM_H
#define PLATFORM_H

#if defined(__aarch64__)
#define SIMD_ARCH_ARM
#else
#error Unsupported architecture.
#endif

#endif // PLATFORM_H
