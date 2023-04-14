#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate memory
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
