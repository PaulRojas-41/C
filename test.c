/*
 * File: localconstants.c
 * Description: Source file to test local constants and functions.
 * Author: [Paul Rojas]
*/

#include <stdio.h>
#include <stdint.h>

/* Local constants */
#define size 5

/* Function prototypes */
static void exampleFunction(void);

/* Main function */
int main(void) 
{
    exampleFunction();
    return 0;
}

/* Static function definitions */
static void exampleFunction(void) 
{
    printf("This is an example static function.\n");
}