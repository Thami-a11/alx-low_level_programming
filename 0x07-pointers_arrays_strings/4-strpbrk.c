#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - search for string of any byte
 * @s: string parameter
 * @accept: string parameter
 * Return: pointer char
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] <= '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
