#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i, j, e;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(height * sizeof(int *));
	if (m == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			for (e = 0; e <= i; e++)
			{
			free(m[e]);
			}
			free(m);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}
	return (m);
}
