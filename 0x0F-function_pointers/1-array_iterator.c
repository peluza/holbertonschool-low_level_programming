#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int *p;

	p = size;

	for (i = 0; array[i] <= p; i++)
	{
		(*action)(i);
	}
}
