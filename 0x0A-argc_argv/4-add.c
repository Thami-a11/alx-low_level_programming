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
	int added, i;

	added = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		added += atoi(argv[i]);
	}
	printf("%d\n", added);
	return (0);
}
