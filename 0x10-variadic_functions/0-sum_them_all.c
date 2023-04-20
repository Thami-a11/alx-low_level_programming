#include "variadic_functions.h"

/**
 * sum_them_all - sun parameter
 * @n: arguments.
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	int s;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int value = va_arg(args, int);

		s += value;
	}

	va_end(args);

	return (s);

}
