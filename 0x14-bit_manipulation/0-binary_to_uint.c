#include "holberton.h"


/**
 * binary_to_uint - converte the binary number to number unsigned int
 * @b: the punters is chars is binary number
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int p, i, a;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
		i++;
	i = i - 1;
	p = 0;
	n = 0;
	while (i >= 0)
	{
		a = b[i];
		if (a == '0')
		{
			p++;
			i--;
		}
		else if (a == '1')
		{
			n += 1 << p;
			p++;
			i--;
		}
		else
			return (0);
	}
	return (n);
}
