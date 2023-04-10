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

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		n = atoi(argv[i]);

		if (!(isdigit(n)))
		{
			printf("Error\n");
			return (1);
		}
		added += n;
	}
	printf("%d\n", added);
	return (0);
}
