#include <stdio.h>

/**
 * main - a program that write its own name
 * @argc: counter
 * @argv: array of argc
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	unsigned int i;

	i = argc - argc;
	printf("%s\n", argv[i]);
	return (0);
}
