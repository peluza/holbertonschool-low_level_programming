#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - the print of the table
 * @a: the punters contain the caractert
 * @size: the number for sum
 * Return: a
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, e = 0, d = (size * size);

	for (i = 0; i <= d; i += size + 1)
	{
		j += a[i];
	}
	for (i = size - 1; i < d - 1; i += size - 1)
	{
		e += a[i];
	}

	printf("%d, %d\n", j, e);
}
