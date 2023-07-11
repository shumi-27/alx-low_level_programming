#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function
 * @grid :  grid.
 * @height : rows.
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
