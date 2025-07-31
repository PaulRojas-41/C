/* [dev_ex_realloc] example for usage of realloc method with integer type */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int *s_2 = (int *)malloc(sizeof(int) * 2); /* buffer of 8 bytes */

    *(s_2 + 0) = 10;
    *(s_2 + 1) = 20;
    /* information before reallocate and add more space */

    for(int i=0; i < 3; i++)
    {
        printf("%d\n", *(s_2 + i));
    }

    /* realloc with one 4-byte size more*/
    s_2 = realloc(s_2, sizeof(int) * 3); /* 12 bytes: here we add another 4-byte space */

    *(s_2 + 2) = 30;

    for(int i=0; i < 3; i++)
    {
        printf("%d\n", *(s_2 + i));
    }

    return 0;
}