#include "main.h"

/**
 * _puts - write a string
 *
 *@str: string parameter
 *
*/ 

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
