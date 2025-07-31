/* [dev_ex_realloc] print each word's sentence in a separate line */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char *s = (char *)malloc(sizeof(char) * 1024); /* buffer of 1024 bytes */

    scanf("%[^\n]s",s); /* array of string = array of pointers? */

   /* all the sentence has a null at the end of it. Not at the end of each word */

    for(int i =0; s[i] != '\0'; i++)
    {
        printf("%c",s[i]);

        if(s[i] == ' ')
        {
            printf("\n");
        }
    }

    free(s);

    return 0;
}