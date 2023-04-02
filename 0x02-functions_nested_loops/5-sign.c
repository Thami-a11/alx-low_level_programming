#include "main.h"

/**
 *
 * print_sign - prints the sign based on n
 * @n: parameter
 * Return: number
*/
int print_sign(int n)
{
	if(n => 1)
	{
		_putchar('+');
		return(1);
	}
	else if(n =< 1)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
