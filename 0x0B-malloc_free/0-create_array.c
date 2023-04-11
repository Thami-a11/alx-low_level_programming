#include "main.h"

/**
 * create_array - create and arry
 *
 * @size: size of array
 * @c: values to be in array
 * Return: char
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = malloc(sizeof(char) * size);

	if (size != 0)
	{
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (a);
}
