#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (needle[i] == haystack[0])
		{
			
