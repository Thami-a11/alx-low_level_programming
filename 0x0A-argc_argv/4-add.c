#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - write all arguments
 * @argc: argument count
 * @argv: array of argument
 * Return:0 or 1
 */

int main(int argc, char *argv[])
{
       	int added, i, n;

	added = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (isdigit(n))
		{
			added += n;
		}
		printf("Error\n");
		return (1);
	}
	printf("%d\n", added);
	return (0);
}
