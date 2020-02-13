#include "holberton.h"

/**
* print_diagonal - the print numbers the 0 to 9
*
* @n: numbers the line
*
* Return: Always 0 (Success)
*/

void print_diagonal(int n)

{
	int i;
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 1; a <= n; a++)
		{
			for (i = 1; i <= a; i++)
			{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	_putchar('\n');
	}

}
