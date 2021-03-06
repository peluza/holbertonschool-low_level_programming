#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the number separator for colom
 * @separator: this is chars colom
 * @n: the chars is a number
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int a;

	va_start(list, n);

	for (i = 0 ; i < n; i++)
	{
		a = va_arg(list, int);
		printf("%i", a);
		if (separator != 0)
		{
			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(list);

}
