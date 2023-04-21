
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: seperator between numbers
 * @n: passed int
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for  (i = 0; i < n; i++)
	{

		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
