/* [dev_ex_bit_counter_2] Bit counter ex2 for any type of data */
#include <stdio.h>
#include <stdint.h>
#include "bitwise_lib.h"

extern void print_bit(size_t const x, void const *ptr)
{
    unsigned char *local_ptr = (unsigned char *)ptr;
    int mask;

    for(int i = x - 1; i >= 0; i--) /* for each byte */
    {
        for(int j = 7; j >= 0; j--) /* read each bit */
        {
            mask = ((local_ptr[i] >> j) & 1) ? printf("%c",  '1') : printf("%c",  '0'); /* right shift and AND with 1 */
        }
    }
}

int main(void)
{
    int value = 0xAB110010; // 0001 1101
    print_bit(sizeof(value), &value);

    return 0;
}