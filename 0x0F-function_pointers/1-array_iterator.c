#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the array at archive
 * @size: the size of the number at archive
 * @action: the punter at funtion
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != 0 && array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
