#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concat
 * @ac: int
 * @av: array string
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, l, n;

	char *s;

	n = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)

	{
		len = strlen(av[i]);
	}

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
		{
			str[n] = av[i][j];
			n++;
		}

		if (s[n] == '\0')
		{
			s[n++] = '\n';
		}

	}

	return (s);
}
