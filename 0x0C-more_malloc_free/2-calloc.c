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

	for (i = 0; i != '\0'; i++)
	{

	}
	if ((nmemb == 0) || (size == 0))
	{
		return (0);
	}
	e = malloc(sizeof(char) * ((i) + 1));
	if (e == 0)
	{
		return (0);
	}
	return (e);
}
