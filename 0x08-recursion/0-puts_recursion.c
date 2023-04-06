#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: char parameter
 *
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
