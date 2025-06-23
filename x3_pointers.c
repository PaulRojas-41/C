/* [dev_ex_ptrs_1] 2 pointers to analyse dereference and reference behavior */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int test[3] = {3,5,7};
    int *ptr = test; /* test represents the address of the first element of the array => test[0]*/
    int *ptr_2 = &test[0]; /* Another way to initialize the pointer with the address of the first element of the array */

    /* print addresses of each element of the array */
    for(int i = 0; i < 3; i++) { printf("%p\n",&test[i]);}

    /* Another syntax to print the addresses */
    for(int i = 0; i < 3; i++) { printf("Another style: %p\n",test+i);}

    /* print pointer's pointing to first arrays's element */
    printf("\nInit value ptr1: %p",ptr); 
    printf("\nInit value ptr2: %p",ptr_2); 
    
    /* ptr = ptr + 1; ref shifts to next element's array / content now is 5 and ptr points to test[1]. Returns the address reference*/

    /* What happens with the expression below: line 28 */

    *ptr = *(ptr + 1); /* content: test[0] = test[1] (5) => then ptr_2 takes this same value */

    printf("\nptr 1 address: %p",ptr); /* same address location: test[0] */
    printf("\nptr 2 address: %p",ptr_2); /* same address location: test[0] */

    printf("\ncontent ptr1: %d",*ptr);
    printf("\ncontent ptr2: %d",*ptr_2);

    *ptr = *(ptr + 1);

    printf("\n2nd round of ptr1's content: %d",*ptr);
    printf("\n2nd round of ptr1's content: %d",*ptr);

    return 0;
}