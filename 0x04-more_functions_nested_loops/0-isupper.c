#include "main.h"

/**
 * _isupper - checks if char is uppercase
 *
 * @c: char parameter to be checked
 *
 * Return: 1 if true 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
