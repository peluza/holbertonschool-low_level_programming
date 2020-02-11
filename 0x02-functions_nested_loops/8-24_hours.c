#include "holberton.h"

/**
* jack_bauer - time the jack_bauer
*@a - time hour
*@b - time hour
*@c - time minute
*@d - time minute
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)

{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (!(a == 2 && b == 4 && c == 0 && d == 0))
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
					else
					{
						return;
					}
				}
			}
		}
	}
}
