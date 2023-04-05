#include "main.h"

/**
 * _pow_recursion - get power of
 * @x: base parameter
 * @y: Power parameter
 * Return: power of
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
