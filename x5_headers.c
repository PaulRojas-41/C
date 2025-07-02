/* [dev_ex_preprocessor_calls] Example for preprocessor elements for compiler considerations */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "strcpy_lib.h" /* void my_strcpy(char *str1, char *str2); */
#include "mytest_lib.h" /* my_strcpy not be pasted here */

/* Macro defined */
#define size 5

/* user defined data types */


int main(void)
{
    printf("Hello...");

    char str1[20] = "Welcome to C Lang"; 
    char str2[20] = "Paul";  

    printf("\nstr1 = %s", str1); 
    printf("\nstr2 = %s",str2);

    my_strcpy(str1, str2); /* dest_buffer, source_buffer by pointer */

    printf("\nstr1 = %s", str1); 
    printf("\nstr2 = %s",str2);

    return 0;
}
