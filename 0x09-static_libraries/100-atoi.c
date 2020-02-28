#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - the funtion
 *
 *@s: variable
 *
 * Return: Always 0.
**/

int _atoi(char *s)
{
	int i, n, b, e;

	i = 0;
	e = -1;
	n = 0;
	b = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			e *= -1;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			n *= 10;
			n -= (s[i] - '0');
			b = 1;
		}

		else if (b == 1)
		{
			break;
		}

		i++;
	}
n *= e;
return (n);
}
