/* [dev_ex_reverse_array_and_string] example for reverse a given array of numbers and a fixed string */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "strings_lib.h"

#define STR_LEN 15u
#define NUM 5

void reverse_array(int *array, int n);

int main()
{
    int numbers[NUM];
    char string[100] = {"Hola, bienvenido"};

    printf("Numbers:\n");

    for(int i = 0; i <= NUM - 1; i++)
        scanf("%d", numbers + i);

    reverse_array(numbers, NUM);

    reverse_string(string);

    return 0; 
}

void reverse_array(int *array, int n)
{
    int j = n - 1;

    printf("\nReversed numbers:\n");

    while(j >= 0)
    {
        printf("%d ",array[j]);
        j--;
    }
}