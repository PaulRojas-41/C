/* [dev_ex_bit_counter_1] Bit counter ex1 */
#include <stdio.h>
#include <stdint.h>
#include "bitwise_lib.h"

extern void print_bit(uint8_t x)
{
    int bits = sizeof(x) * 8;
    int mask;
    int counter = bits - 1;

    printf("Value:%d\n", x);

    do{
        mask = ((x & (1 << counter)) ? printf("%c",  '1') : printf("%c",  '0'));
        counter--;
    }while(counter >= 0);
}

int main(void)
{
    uint32_t value = 29; // 0001 1101
    print_bit(value);

    return 0;
}