#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string parameter
 * * Return: length of @s
**/

int _strlen(char *s)
{
		int i;

		for (i = 0; s[i] != '\0'; i++)
			;

		return (i);
}
