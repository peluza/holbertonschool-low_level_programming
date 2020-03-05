#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the chars of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *e;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	e = malloc(nmemb * size);
	if (e == NULL)
	{
		free(e);
		return (NULL);
	}
	for (i = 0; e[i] != '\0'; i++)

		e[i] = 0;

	return (e);
}
