#include <stdio.h>

/**
 * main - get number of arguments passed
 * @argc: Counter
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
