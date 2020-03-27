#include "holberton.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: punters contains a number decimal
 * @index: the number at check
 * Return: the converted number, or 0 if
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (n == 0)
		return (-1);
	if (index <= sizeof(unsigned long int) * 8)
	{
		a = 1 << index;
		*n = (*n | a);
		return (1);
	}
	return (-1);
}
