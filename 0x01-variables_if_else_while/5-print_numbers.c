#include <stdio.h>

/**
 * main - print 1 to 10
 * Return: 0
**/

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
