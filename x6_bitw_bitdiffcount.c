/* [dev_ex_bitw_check_bitdiff] Example developed for check bit's diff between 2 numbers */

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
     
    printf("Enter 1st number:\n");
    scanf("%d", &num1);
    printf("Enter 2nd number:\n");
    scanf("%d",&num2);

    /* XOR checks diff between bit's states of 2 numbers */
    getBits = num1 ^ num2;

    while(getBits)
    {
        getBits &= (getBits - 1); /* unsets the rightmost set bit of the original number */
        counter++;
    }
    printf("\nBits of difference between 2 numbers :%d",counter);

    return 0;
}