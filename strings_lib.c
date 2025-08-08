/*[dev_lib_strcpy] Stringcpy lib example */

#include <stdio.h>
#include <string.h> 
#include "strings_lib.h" /* [1st ref]: my_strcpy(char *str1, char *str2); */


void my_strcpy(char *str1, char *str2)
{
    int n = strlen(str2);
    
    for (int i = 0; i <= n; i++)
    {
        str1[i] = str2[i];
    }
}

void reverse_fixed_string(char *string)
{
    int s_len = strlen(string);
    
    for(int j = s_len - 1; j >= 0; j--)
    {
        printf("%c ", string[j]);
    }
}