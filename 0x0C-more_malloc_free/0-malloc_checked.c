#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *
 * @b: the variable number
 *
 * Return: true return is addres memory is false return 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == 0)
	{
		exit(98);
	}
	return (a);

}
