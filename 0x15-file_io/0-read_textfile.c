#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints out
 * @filename: pointer
 * @letters: letters
 * Description: function that reads a text file and prints it.
 * Return: number of letters it could read and print, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, wr;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	wr = write(STDOUT_FILENO, text, let);

	close(file);

	return (wr);
}
