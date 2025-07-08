/* [dev_ex_bitdiff_count] 2nd version of count bit diff between 2 numbers */

#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include "bitwise_lib.h"


int main(void) 
{
    int num1;
    int num2;
    int counter = 0;
    int getBits;
    int result;
     
    printf("Enter 1st number:\n");
    scanf("%d", &num1);
    printf("Enter 2nd number:\n");
    scanf("%d",&num2);

    /* XOR checks diff between bit's states of 2 numbers */
    getBits = num1 ^ num2;

    while(getBits)
    {
        result = CHECK_BIT_ON(getBits);

        if(result)
        {
            counter++;
        }
        getBits = SHIFT2RIGHT(getBits);
    }
    printf("\nBits of difference between 2 entered numbers :%d",counter);

    return 0;
}