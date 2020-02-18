#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - the swap number 98 to 42
 *
 * @a: the number 98
 * @b: the number 42
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{
	int c, d;


	c = *a;
	d = *b;
	*a = d;
	*b = c;


}



