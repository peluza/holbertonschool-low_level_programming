#include "holberton.h"

/**
* print_line - the print numbers the 0 to 9
*
* @n: numbers the line
*
* Return: Always 0 (Success)
*/

void print_line(int n)

{
	int a = 95;
	int i;

		if (n <= 0)
		{
			_putchar('\n');
		}

		else
		{
			while (i <= n)

				i++;

			_putchar(a);
		}
}
