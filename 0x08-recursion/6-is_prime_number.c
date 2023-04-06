#include "main.h"

/**
 * is_prime_number - Get 1 or 0 for is a prime number
 * @n: number parameter
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	return (helperFunc(n, 2));
}

/**
 * helperFunc - Helper funtion to get is prime
 * @n: number parameter
 * @i: base parameter
 * Return: 1 0r 0
 *
 */

int helperFunc(int n, int i)
{
	if (i > _sqrt_recursion(n))
	{
		return (1);
	}
	else if (n % i == 0)
		return (0);
	return (is_prime_number_helper(n, i + 1));
}
