#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the chars separator for colom
 * @separator: this is chars colom
 * @n: the chars is a number
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *a;

	if (n == 0)
	{
		printf("nill");
	}
	va_start(list, n);

	for (i = 0 ; i < n; i++)
	{
		a = va_arg(list, char *);
		printf("%s", a);
		if (separator != 0)
		{

			if (i < (n - 1))
				printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(list);
}

