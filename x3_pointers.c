/* [dev_ex_ptrs_1] 2 pointers to analyse dereference and reference behavior */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main() 
{
    int test[3] = {3,5,7};
    
    int *ptr_2 = &test[0]; /* Another way to initialize the pointer with the address of the first element of the array */
    int *ptr = test; /* test represents the address of the first element of the array => test[0]*/
    
    uint8_t i,j;

    /* print addresses of each element of the array */
    for(int i = 0; i < 3; i++) { printf("%p\n",&test[i]);}

    /* Another syntax to print the addresses */
    for(int i = 0; i < 3; i++) { printf("Another style: %p\n",test+i);}

    /* memory practice section */
    uint32_t buffer_test_3[] = {0xAACCDDEE,0xEEDDCCAA, 0xDDDDCCAA, 0xAADDEECC};
    uint32_t *ptr_test_3 = buffer_test_3;

        
    for(int i = 0; i < 4; i++)
        printf("\n%p", &buffer_test_3[i]);

    /* moving through addresses to point to */
    printf("\n%p", &ptr_test_3[3]);

    //syntax error: printf("\n%d", *(ptr_test_3[3]));
    printf("\n%x", *(ptr_test_3 + 0));

    ptr_test_3+= 1;

    for(int i = 0; i < 4; i++)
         printf("\n%p", &ptr_test_3[i]);

         /* 000000B4677FF8E0
            000000B4677FF8E4
            000000B4677FF8E8
            000000B4677FF8EC
            000000B4677FF8EC
            aaccddee
            000000B4677FF8E4 line 49 shift
            000000B4677FF8E8
            000000B4677FF8EC 
            000000B4677FF8F0 here out of array's lenght  */

    printf("\n%x", *(ptr_test_3 + 2)); //shift in content 0xAADDEECC
    printf("\n%p", &ptr_test_3[2]); //shift in address: 000000B4677FF8EC   that contains 0xAADDEECC

    return 0;
}