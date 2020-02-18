#include "holberton.h"

/**
 * print_rev - print the text rev
 *
 * @s: caracter
 */

void print_rev(char *s)
{
	char a;
	int x, c;

	a = s[0];

	for (x = 0; a != '\0'; x++)
	{
		a = s[x];
		c = x;
	}
		while (c >= 0)
		{
			_putchar(s[c]);
		c--;
		}


_putchar('\n');
}
