#ifndef __bitwise_lib__
#define __bitwise_lib__

#define CHECK_BIT_ON(x) (x & 1)
#define SHIFT2RIGHT(x) (x >> 1)
#define SHIFT2LEFT(x) (x << 1)
#define BITLEFTSHIFT(x) (1 << x)

#endif