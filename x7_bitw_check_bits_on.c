/* [dev_ex_bitw_checkbits_on] Example for check bits "ON" in a single number */

#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include "bitwise_lib.h"

int main()
{
    int num;
    int counter = 0;
    int result;

    printf("\nEnter the number:");
    scanf("%d",&num);

    while(num)
    {   
        result = CHECK_BIT_ON(num);
        
        if(result)
        {
            counter++;
        }
        num = num >> 1;

        printf("\nShifted num value:%d",num);
    }
    printf("\nBits set of the entered number:\n%d",counter);

    return 0;
}