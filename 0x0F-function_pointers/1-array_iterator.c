#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print an integer
 * @array: int
 * @action: function pointer
 * @size: arry size
 * Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	:
	for  (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
