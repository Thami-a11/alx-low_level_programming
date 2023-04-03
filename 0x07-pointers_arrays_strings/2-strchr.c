#include "main.h"

/**
 * _strchr - search for char in string
 * @s: string parameter
 * @c: char parameter
 * Return: char fount in string
*/

char *_strchr(char *s, char c)
{
	int i;


	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (c);
		}
		else
		{
			return (0);
		}
	}
}
