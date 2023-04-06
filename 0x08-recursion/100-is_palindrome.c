#include "main.h"

/**
 * is_palindrome - cheack is palindrome
 * @s: string paramter
 * Return: 1 or 0:
*/

int is_palindrome(char *s)
{
	int l = _strlen(s);

	if (s[0] != s[l - 1])
		return (0);
	else if (l <= 1 || s[0] == ' ')
	{
		return (1);
	}
	else
	{
		s[l - 1] = '\0';
		int i = is_palindrome(&s[1]);

		s[l - 1] = s[0];
		return (i);
	}
}
