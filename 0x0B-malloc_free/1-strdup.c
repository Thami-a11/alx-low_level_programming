#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy string and allocate to memory
 * @str: input string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	int l;

	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	l = _strlen(*str) + 1;
	c = malloc(l * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	return (c);
}
