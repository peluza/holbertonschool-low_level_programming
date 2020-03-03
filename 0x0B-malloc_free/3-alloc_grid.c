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
	int i, j;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(width * sizeof(int *));
	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width ; i++)
	{
		n[i] = malloc(height * sizeof(int *));
		if (n == NULL)
		{
			free(n);
			return (NULL);
		}

		for (j = 0; j < height ; j++)
		{
			n[i][j] = 0;

		}
	}
	return (n);
}
