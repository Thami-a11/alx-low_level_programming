#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description: 'if..else'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts(" is positive");
	}
	else if (n < 0)
	{
		puts(" is negative");
	}
	else
	{
		puts(" is zero");
	}

	return (0);
}
