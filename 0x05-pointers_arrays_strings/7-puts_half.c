#include "holberton.h"
#include <stdio.h>

/**
 *  - long of the str
 *
 * @s: the caracter
 *
 */

void puts_half(char *str)
{
	char a;
	int x, c;

	for (c = 0; c <= '\0'; c ++)
		{
			for (x = c; x <= str[c]; x++)

			{
				if ((c % 2) == 0)
				{
					c = (c / 2);
				}

				else

				{
					a = (c - 1) /2;
					c = c + 1;
				}
			for (a = c; a <= str[c]; a ++)
			{
				putchar(str[c]);

			
			}
			}
		}
}
