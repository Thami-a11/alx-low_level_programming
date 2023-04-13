#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int input
 * Return:  pointer
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;
	
	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
