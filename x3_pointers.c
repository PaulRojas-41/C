/* [dev_ex_ptrs_1] 2 pointers to analyse dereference and reference behavior */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main() 
{
    int test[3] = {3,5,7};
    int *ptr = test; /* test represents the address of the first element of the array => test[0]*/
    int *ptr_2 = &test[0]; /* Another way to initialize the pointer with the address of the first element of the array */

    char *names[] = {"Bienvenue", "Paul", "Rojas"}; //array of pointers initialization.
    char *get_string = names[0]; // pointer of type char initializes with the first pointer of the array (names[0])

    uint8_t i,j;

    /* print addresses of each element of the array */
    for(int i = 0; i < 3; i++) { printf("%p\n",&test[i]);}

    /* Another syntax to print the addresses */
    for(int i = 0; i < 3; i++) { printf("Another style: %p\n",test+i);}

    /* Array of pointers section */

    for(i = 0; i < 3; i++)
    { 
        get_string = names[i];

        for(j = 0; j < strlen(names[i]); j++)
            printf("%c", *(get_string + j)); 
    }

    /* Array of pointers section */

    uint32_t u32_data_format = 0x08008000;
    volatile uint32_t *u32_ptr_data = (volatile uint32_t *)u32_data_format; // address to write
    uint32_t array[] = {0xCC, 0xEE, 0xAA};

    printf("\n%x", u32_ptr_data);

    
    *u32_ptr_data = (uint32_t)array[0]; //we write in "0x08008000"

    printf("\n%x", u32_ptr_data); //address = 0x8008000
    printf("\n%x", *u32_ptr_data); //content = CC


    return 0;
}