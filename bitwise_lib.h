#ifndef __bitwise_lib__
#define __bitwise_lib__

#define BITSHIFT(x) (1 << x)
#define SET_BIT(BITSHIFT, byte) (byte |= BITSHIFT)
#define CLEAR_BIT(BITSHIFT, byte) (byte &= ~BITSHIFT)
#define TOGGLE_BIT(BITSHIFT, byte) (byte ^= BITSHIFT)

#endif