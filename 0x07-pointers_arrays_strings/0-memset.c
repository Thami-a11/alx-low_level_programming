#include "main.h"

/**
 * _memset - assign - the first byte to n
 * @s: parameter pointer
 * @b: parameter
 * @n: int parameter
 * Return: pointer char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
