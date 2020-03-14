#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the funtion sum all arguments of the lsit
 *
 * @n: the number
 *
 * Return: the result of the sum
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list list;
	unsigned int i;
	double sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(list, n);

		for (i = 0 ; i < n; i++)

		{
			sum += va_arg(list, int);
		}

		va_end(list);
		{
			return (sum);
		}
	}
	return (0);
}
