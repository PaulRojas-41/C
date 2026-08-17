/* [dev_ex_preprocessor_calls] Example for preprocessor elements for compiler considerations */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "strings_lib.h" /* void my_strcpy(char *str1, char *str2); */

int main(void)
{
    char str1[20] = "Welcome to C Lang"; 
    char str2[20] = "Paul";  
    char *get_str;
    char *get_reversed_str;

    get_str = my_strcpy(str1, str2); /* returns string literal considered as an address. */

    printf("%s", get_str); /*Paul*/

    get_reversed_str = my_rev_string(get_str);

    printf("\n%s", get_reversed_str); /* luaP */

    return 0;
}
