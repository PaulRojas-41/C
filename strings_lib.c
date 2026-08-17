#include <stdio.h>
#include <string.h> 
#include "strings_lib.h"

char *my_strcpy(char *dst, char *src)
{
    int n = strlen(src);
    char *local_ptr = dst;

    for(int i = 0; i <= n; i++)
    {
        local_ptr[i] = src[i];
    }

    return local_ptr;
}

char *my_rev_string(char *string)
{
    int s_len = strlen(string);
    char cpy[s_len];
    char *get_cpy = cpy;
    int i = 0;

    for(int j = s_len - 1; j >= 0; j--)
    {
        cpy[i] = string[j];
        i++;
    }

    return get_cpy;
}