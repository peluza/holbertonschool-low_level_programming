#include "holberton.h"

/**
* print_triangle - the print a square
*
* @size: numbers the line
*
* Return: Always 0 (Success)
*/

void print_triangle(int size)

{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else

	{
		for (i = 1; i <= size; i++)
		{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
	}

}
