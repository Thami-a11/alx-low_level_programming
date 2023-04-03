#include "main.h"
#include <stdlib.h>

/**
 * _strchr - search for char in string
 * @s: string parameter
 * @c: char parameter
 * Return: char fount in string
*/

char *_strchr(char *s, char c)
{
	int i;


	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
