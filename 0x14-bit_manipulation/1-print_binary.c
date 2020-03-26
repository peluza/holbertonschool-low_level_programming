#include "holberton.h"


/**
 * print_binary - converte thev  number to binary number
 * @n: the number at converte for binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int a, tmp, b;
	int i;

	i = sizeof(unsigned long int) * 8 - 1;
	a = 1;
	b = 0;
	while (i >= 0)
	{
		tmp = n >> i;
		if ((tmp & a) == 0)
		{
			if (b == 1)
				_putchar('0');
		}
		else
		{
			b = 1;
			_putchar('1');
		}
		i--;
	}
	if (n == 0)
		_putchar('0');
}
