#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 *
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[min(b, size) - 1] < value && b < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b = b + sqrt(size);
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value && b < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
		if (a == min(b, size))
			return (-1);
	}
	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}
	return (-1);
}

/**
 * min - number min
 *
 * Return: number min
 */

size_t min(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	else
		return (num1);
}
