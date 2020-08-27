#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: size of the array
 * @value: the value at search
 * Return: number of the line
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
