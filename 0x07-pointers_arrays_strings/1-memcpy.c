#include "main.h"

/**
 * _memcpy - copy src char to dest char
 * @dest: destinatoin parameter
 * @src: source Parameter
 * @n: n count parameter
 * Return: char destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
