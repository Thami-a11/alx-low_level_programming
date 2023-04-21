
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
		int value = va_arg(args, int);

		printf("%d", value);

		if (separator != NULL || separator == 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
