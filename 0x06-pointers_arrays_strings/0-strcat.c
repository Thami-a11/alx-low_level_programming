#include "main.h"

/**
 * _strcat - Concat strings
 * @dest: destination parameter
 * @src: source parameter
 * Return:dest
*/

char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
