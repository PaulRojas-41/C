/* [x4_strng_funcs_w_heapmem] strings management and memory play-around within function's context using heap memory space */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Marco definition */

/* User defined objects */

/* Function prototypes */

void printString(char buffer_name[]);
char *retHeapInfo(char *data);
char *getString(char *string); /* test return a pointer to a string */

/* global objects */

char *var_getheapData;
char *var_heapBuffer;

int main(void) 
{
    var_getheapData = retHeapInfo("Hello Paul, welcome to C lang"); /* pointer to heap data mem space */

    printf("var_getheapData:\n%s", var_getheapData);
    
    free(var_heapBuffer);

    return 0;
}

/* Method to copy a string into a heap memory space */
char *retHeapInfo(char *data)
{
    int j = 0;
    var_heapBuffer = (char *)malloc(sizeof(char)); /* pointer to heap mem address */
    
    if(data != NULL)
    {
        do{   
            *(var_heapBuffer + j) = data[j];
            j++;
        }while(data[j] != '\0'); /* ERROR_INJ */
    }
    else{ printf("\nInvalid string"); }

    return var_heapBuffer; /* returns the address of the string from the heap mem space */
}

/* Method to get the address of the string */
char *getString(char *string)
{
    return string; /* Returns the address of the string pool mem space */
}

/* Single method to print a string as arg */
void printString(char buffer_name[]) 
{
	printf("\n%s", buffer_name); /* %s specifier tells the function to iterate until found the null char to print  */
}