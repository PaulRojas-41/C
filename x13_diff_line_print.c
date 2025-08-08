/* [dev_ex_realloc] print each word's sentence in a separate line */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "strings_lib.h"

int main() 
{

    char *s = (char *)malloc(sizeof(char) * 1024); /* buffer of 1024 bytes */
    
    scanf("%[^\n]s",s); /* array of string = array of pointers? */

    for(int i =0; s[i] != '\0'; i++)
    {
        printf("%c",s[i]); //array filled : hola

        if(s[i] == '\0')
        {
            /* NULL is found until the end of the complete inserted string */
        }
            
        if(s[i] == ' ')
        {   
            printf("\n");
        }
    }

    free(s);

    return 0;
}