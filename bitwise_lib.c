/* [dev_ex_print_bits_bigendian] Print bits in big endian format */

#include <stdio.h>
#include <stdint.h>
#include "bitwise_lib.h"

extern void print_bit(size_t const x, void const *ptr)
{
    unsigned char *local_ptr = (unsigned char *)ptr;
    int mask, i, j;
    i = x -1;
    mask = local_ptr[i];

    for(i = x - 1; i >= 0; i--) /* for each byte */
    {
        for(j = 7; j >= 0; j--) /* read each bit */
        {
            mask = (SHIFT2RIGHT(local_ptr[i],j) & 1) ? printf("%c",  '1') : printf("%c",  '0'); /* right shift and AND with 1 */
        }
    }
}

/* TEST API
int main(void)
{
    int value = 0xBA110010;
    int tmp = U32_BIG_ENDIAN(value);
    uint8_t buffer[] = {"Hola"};

    print_bit(sizeof(value), &value);
    printf("\n");
    print_bit(sizeof(value), &tmp);
    printf("\nBuffer size: %d",sizeof(buffer));

    return 0;
}*/