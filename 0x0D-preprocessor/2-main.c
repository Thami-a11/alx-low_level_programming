#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from.
 * @argc: int
 * @argv: array
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
