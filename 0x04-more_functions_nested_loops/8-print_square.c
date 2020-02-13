#include "holberton.h"

/**
* print_square - the print a square
*
* @size: numbers the line
*
* Return: Always 0 (Success)
*/

void print_square(int size)

{
	int i;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (i = 2; i <= size; i++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}

}

