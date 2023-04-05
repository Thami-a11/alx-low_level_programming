#include "main.h"

/**
 * _strlen_recursion - get count of string.
 * @s: char parameter
 * Return: int count
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
