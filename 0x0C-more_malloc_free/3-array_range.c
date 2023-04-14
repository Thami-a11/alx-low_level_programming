#include "main.h"
#include <stdlib.h>

/**
 * array_range - Array of int
 * @min: min int
 * @max: max int
 * Return: pt
 */

int *array_range(int min, int max)
{
	int *pt;

	int s, i;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	pt = malloc(s * sizeof(int));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		pt[i] = min + 1;

	return (pt);
}
