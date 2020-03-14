#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print the chars  separator for colom
 * @separator: this is chars colom
 * @n: the chars is a number
 * Return: Always 0
 */


void print_all(const char * const format, ...)
{
	va_list list;
	int x, y;
	char *a;

	x = 0;
	y = 0;

	va_start(list, format);

	x = 0;
	while (format && format[x])

	{ 
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				printf ("%s", va_arg(list, char*));
				break;

				if (a != NULL)
				{
					printf("%s", a);
					break;
				}
				printf ("nill");
				break;
			default:
				y = 0;
		}
		if (format[x + 1]  != 0 && y)
			printf(", ");
		x++;
		y++;
		va_end(list);
	}
	putchar('\n');
}
