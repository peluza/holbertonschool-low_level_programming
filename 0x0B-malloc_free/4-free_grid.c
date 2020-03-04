#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @grid: the chars is arrays
 * @height: height is height
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if ((grid != 0) || (height != 0))
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
