/* [dev_ex_freqdigit_string] prints how many times a digit on a string has repeated */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *s = (char *)malloc(sizeof(char) * 1024); 
    int freq[10] = {0};

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= '0' && s[i] <= '9') 
        {
            freq[s[i] - '0']++; /* freq[5 - 0 = 5] = 1: conversion to int index, associated to the found digit */
        }
    }

    printf("Digit frequencies:\n");

    for (int d = 0; d < 10; d++) 
    {
        printf("%d ", freq[d]);
    }

    free(s);

    return 0;
}