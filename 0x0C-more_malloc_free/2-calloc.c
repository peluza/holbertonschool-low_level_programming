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
	void *a;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	e = a;
	for (i = 0; i < (nmemb * size); i++)

		e[i] = '\0';

	return (e);
}
