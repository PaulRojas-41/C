/* [dev_ex_reverse_array] example of dynamic array reversed */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i , j;
    
    scanf("%d", &num);
    
    arr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
    /* Reversed array */
    for(j = num - 1; j >= 0; j--) 
    {
        printf("%d ", arr[j]);
    }    
    
    free(arr);

    return 0;
}