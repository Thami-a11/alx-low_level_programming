#include "main.h"
#include <stdlib.h>

/**
 * _calloc - set memory
 * @nmemb: Array
 * @size: Size of Arr
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	pt = malloc(nmemb * size);
	
	if (pt == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		pt[i] = 0;
		i++;
	}
	return (pt);
}
