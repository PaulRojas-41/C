/* [dev_ex_endianess] example to convert u32 expression to big endian format */

#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include "bitwise_lib.h"


int main(void) 
{
    int num1 = 0xF0;
    int num2 = 0x0F;
    uint32_t data = 0x30AD40CB; /* BigEndian: CB40 AD30*/ 

    
    
    printf("Num1 in little endian: %d", UINT8_LITTLE_ENDIAN(num1));
    printf("\nNum2 in big endian: %d", UINT8_BIG_ENDIAN(num2));

    printf("\nExpression in little endian: 0x%X", data);
    
    data = U32_BIG_ENDIAN(data);

    printf("\nExpression in Big endian: 0x%X", data);

    return 0;
}