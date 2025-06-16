/* [error_ex_memleak] Memory leak DMA  */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int func1();
int func2(char *buffer);

int main(void) {
    // Your code here

    int num = 41;
    int *ptr = &num; /* VALUE: Ref to num var */
    int ret;

    ret = func1();

    return 0;
}

int func1() 
{
	int ret = -1;
	char *buff = (char *)malloc(sizeof(char) * 20); /* heap block allocated */

    buff = "\nHello..."; /* VALUE: ref to Stack address */

    ret = func2(buff);

	printf("\n Buffer is : %s",buff);

	return 0;
}
 
int func2 (char *buffer) 
{
	free(buffer); /* free-ing a buffer that refers to string literal with a STACK address */

	return 0;
}