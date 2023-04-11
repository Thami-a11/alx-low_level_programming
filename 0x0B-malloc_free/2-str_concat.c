#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concat two strings and allocate memory
 *
 *@s1: 1st string
 *@s2: 2st string
 *Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int ls1, ls2, i, j, Flen;

	char *c;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	ls1 = strlen(s1);
	ls2 = strlen(s2);
	Flen = ls1 + ls2 + 1;

	c = malloc(sizeof(char) * Flen);

	if (c == NULL)
		return (NULL);

	for (i = 0; i <= ls1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j <= ls2; j++)
	{
		c[ls1 + j] = s2[j];
	}
	return (c);
}
