/* [dev_ex_accum_dynamic_array] example of dynamic array and the sum of its elements */

#include <stdio.h>
#include <conio.h>
#include <stdint.h>
#include <stdlib.h>
#include "bitwise_lib.h"


int main(void) 
{
   /* Size of the array and numbers by user input */

    int size; 
    int number;
    int total = 0;

    printf("Insert number of elements:\n");
    scanf("%d",&size);

    /* dynamic array */

    int *d_array = (int *)malloc(sizeof(int) * size); /* pointer that contains a ref to the heap mem area */

    /* iteration */

    for(int i = 0; i < size; i++)
    {
        printf("\nInsert the number:");
        scanf("%d",d_array + i);

        // *(d_array + i) = number; 
        total += d_array[i];

    }
    printf("\nTotal sum of inserted numbers:\n%d", total);

    free(d_array);

    return 0;
}