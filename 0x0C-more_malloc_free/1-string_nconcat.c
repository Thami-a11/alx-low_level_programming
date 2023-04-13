#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatnate strings with n bytes
 * @s1: destination
 * @s2: source
 * @n: size of byte
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, strlen1, strlen2, conlen;

	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	while (*s1 != '\0')
	{
		s1++;
		i++;
		strlen1 = i;
	}

	while (*s2 != '\0')
	{
		s2++;
		i++;
		strlen2 = i;
	}

	str = malloc(conlen);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j <= n; j++)
	{
		str[strlen1 + j] = s2[j];
	}
	return (str);
}
