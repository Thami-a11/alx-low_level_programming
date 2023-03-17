#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print the last digit.
 * Return: 0
**/
/* betty style doc for function main goes there */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
	{
		puts(" and is greater than 5");
	}
	else if (last_digit < 0)
	{
		puts(" and is less than 6 and not 0");
	}
	else
	{
		puts(" and is 0");
	}


	return (0);
}
