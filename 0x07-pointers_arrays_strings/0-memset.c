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

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
