#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *f = format;

	va_list args;

	va_start(args, format);

	while (*f)
	{
		switch (*f)
		{
			case 'i': {
					  int value = va_arg(args, int);

					  printf("%d", value);
					  break;
				  }
			case 'd': {
					  double value = va_arg(args, double);

					  printf("%f", value);
					  break;
			}
			case 'c': {
					  char value = (char) va_arg(args, int);

					  printf("%c", value);
					  break;
				  }
			case 's': {
					  char *value = va_arg(args, char *);

					  printf("%s", value);
					  break;
				  }
			default:
				  break;
		}
		printf(", ");
		f++;
	}
	printf("\n");
	va_end(args);
}
