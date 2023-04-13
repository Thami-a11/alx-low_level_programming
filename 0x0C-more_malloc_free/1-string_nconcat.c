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
	unsigned int i, j, strlen1, strlen2;

	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	for (strlen1 = 0; s1[strlen1] != '\0'; strlen1++)
		;
	for (strlen2 = 0; s2[strlen2] != '\0'; strlen2++)
		;

	if (n >= strlen2)
	{
		n = strlen2;
		str = malloc(sizeof(char) * (strlen1 + strlen2 + 1));
	}
	else
		str = malloc(sizeof(char) * (strlen1 + n + 1));

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
