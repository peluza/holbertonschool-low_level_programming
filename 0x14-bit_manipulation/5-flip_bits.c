#include "holberton.h"

/**
 * flip_bits - tales numbers missing
 * @n: punters contains a number decimal
 * @m: the number at check
 * Return: tales numbers missing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, x;

	x = (n ^ m);
	i = 0;
	while (x != 0)
	{
		if ((x & 1) == 1)
			i++;
		x = x >> 1;
	}
	return (i);
}
