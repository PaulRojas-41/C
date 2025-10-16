#ifndef __bitwise_lib__
#define __bitwise_lib__

#define CHECK_BIT_ON(x) (x & 1)
#define SHIFT2RIGHT(x) (x >> 1)
#define SHIFT2LEFT(x) (x << 1)
#define BITLEFTSHIFT(x) (1 << x)
#define BITRIGHTSHIFT(x) (1 >> x)
#define UINT8_LITTLE_ENDIAN(x) (x >> 4)
#define UINT8_BIG_ENDIAN(x) (x << 4)
#define U32_BIG_ENDIAN(x) ((0xFF000000 & x) >> 24) | ((0x00FF0000 & x) >> 8) | ((0x0000FF00 & x) << 8) | ((0x000000FF & x) << 24)

extern void print_bit(uint8_t x);

#endif