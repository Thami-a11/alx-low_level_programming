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
	int i, j, l, n, Tl;

	char *s;

	n = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)

	{
		l = strlen(av[i]);
		Tl = l + 1;
	}

	s = malloc(sizeof(char) * Tl);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
		{
			s[n] = av[i][j];
			n++;
		}

		if (s[n] == '\0')
		{
			s[n++] = '\n';
		}

	}

	return (s);
}
