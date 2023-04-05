#include "main.h"

/**
 * helperFunc - helper function
 * @n: number
 * @c: base number
 * Return: int
*/

int helperFunc(int n, int c)
{
	if (c * c > n)
		return (-1);
	else if
		(c * c == n);
	return (helperFunc(n, c + 1));
}

/**
 * _sqrt_recursion - get squre root of a number
 * @n: input parameter
 * Return: sqrt
*/

int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (-1);
	return (helperFunc(n, 1));
}

