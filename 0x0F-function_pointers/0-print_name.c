#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name
 * @f: pointer
**/

void print_name(char *name, void (*f)(char *))
{
	void print(char *s)
	{
		int i;
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		_putchar('\n');
	}
}
