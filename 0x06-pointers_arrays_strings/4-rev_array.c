#include "holberton.h"

/**
 * print_rev - print the text rev
 *
 * @s: caracter
 */

void reverse_array(int *a, int n)
{
	char b;
	int x, c;

	b = a[0];

	for (x = 0; b != '\0'; x++)
	{
		b = a[x];
		c = x;
	}
	c = c - 1;
		while (c >= 0)
		{
		_putchar(a[c]);
		c--;
		}


_putchar('\n');
}
