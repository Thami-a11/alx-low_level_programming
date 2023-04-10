#include <stdio.h>
#include <stdlib.h>
/**
 * main - write all arguments
 * @argc: argument count
 * @argv: array of argument
 * Return:0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);


		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
}
