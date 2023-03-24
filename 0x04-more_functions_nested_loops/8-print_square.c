#include "main.h"

/**
 * print_square- draws a square on the terminal
 * @size: number of times to print square
**/

void print_square(int size)
{
	int i, j;

	for (i = '0'; i <= n; i++)
	{
		for (j = '0'; j <= i; j++)
		{
			_putchar('#');
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
