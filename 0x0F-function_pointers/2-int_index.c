#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for int
 * @array: Name 
 * @size: array size
 * @cmp: Pointer
 * Return: int
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}	
	return (-1);
}
