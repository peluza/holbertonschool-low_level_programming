#include "holberton.h"

/**
 * puts2 - puts2 print to numbers par
 *
 * @str: the punter
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int x, a;

		for (x = 0; str[x] != '\0'; x++)
		{
			a = (x % 2);

			if (a == 0)
			{
				_putchar(str[x]);
			}
		}

_putchar('\n');
}
