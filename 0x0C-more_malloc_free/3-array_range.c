#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints number in order
 * @min: the number min
 * @max: the number max
 *
 * Return: the punters
 */

int *array_range(int min, int max)
{
	int i, l;
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	l = max - min + 1;

	s = malloc(sizeof(int) * l);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l; i++)
		{
			s[i] = min;
			min++;
		}
	}
	return (s);
}
