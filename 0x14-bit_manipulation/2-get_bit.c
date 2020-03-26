#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number decimal
 * @index: the number at check
 * Return: the converted number, or 0 if
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	a = 1 << index;
	if (index <= sizeof(unsigned long int) * 8)
	{
		if ((a & n) > 0)
			return (1);
		if ((a & n) == 0)
			return (0);
	}
	return (-1);
}
