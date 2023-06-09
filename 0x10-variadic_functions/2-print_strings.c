#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string.
 * @n: number of passed parameter
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);

		if (value != NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
