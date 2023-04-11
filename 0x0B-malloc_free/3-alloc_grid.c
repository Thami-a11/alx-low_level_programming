#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - create grid
 * @width: input width
 * @height: input height
 * Return: **grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
				grid[i][j] = 0;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
