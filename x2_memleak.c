/* Memory Management */
#include <stdio.h>
#include <stdlib.h>

int func2(int *buffer, size_t size);

int main() 
{
    int *ptr = (int*)malloc(sizeof(int));
    int status = 0;

    status = func2(ptr, 4);

    return 0;
}

int func2(int *buffer, size_t size)
{
    /* it is not NULL but, short enough to be filled by user inserted elements  */
    size_t mem_size;

    mem_size = _msize(buffer);

    if(buffer == NULL)
    {
        printf("\nALLOCATION FAILED...");
    }
    else if(size != mem_size)
    {
        printf("\nALLOCATION FORBIDDEN... ");
    }
    else
    {
        for(int i =0; i < size; i++)
        {
            buffer[i]= i + 1;
        }

        for(int i=0; i < size; i++)
        {
            printf("\n%d", buffer[i]);
        }

        printf("\nALLOCATION SUCCESSFUL.... ");
    }

    free(buffer);

    return 1; 
}
