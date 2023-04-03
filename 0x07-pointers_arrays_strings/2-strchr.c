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


	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
