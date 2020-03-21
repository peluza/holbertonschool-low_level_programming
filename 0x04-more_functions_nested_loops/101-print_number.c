#include "holberton.h"

/**
 * print_number- the print a square
 *@n: the number at print
 */

void print_number(int n)

{
	int i = 0;
	int mod = 1;
	unsigned int dig;

	if (n < 0)
	{
		_putchar('-');
		dig = n * -1;
		i++;
	}
	else
		dig = n;
	while (dig / mod > 9)
	{
		mod = mod * 10;
	}
	while (mod > 0)
	{
		_putchar(dig / mod + '0');
		dig = dig % mod;
		mod = mod / 10;
		i++;
	}
}
