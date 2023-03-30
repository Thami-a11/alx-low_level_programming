#include "main.h"

/**
 * _strncat - concat two string
 * @dest: string parameter
 * @src: string parameter
 * @n: int parameter
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	if (dest == 0 || src == 0)
	{
		return (0);
	}

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);

}
