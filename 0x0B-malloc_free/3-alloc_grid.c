#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height : rows.
 * @width : columns.
 * Return: Pointer to grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if ((width * height) == 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int) * height);
	if (grid == 0)
	{
		return (0);
	}
	for (i = 0; i <  height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
