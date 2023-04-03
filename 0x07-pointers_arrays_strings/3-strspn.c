#include "main.h"

/**
 * _strspn - get length of substring
 * @s: parameter
 * @accept: parameter
 * Return: interger
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	unsigned int counter;

	counter = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				counter++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (counter);
			}
		}

		s++;
	}
	return (counter);
}
