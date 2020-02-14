#include "holberton.h"

/**
* print_number - the print a square
*
* @size: numbers the line
*
* Return: Always 0 (Success)
*/

void print_number(int n)

{

	int a;
	int i;

	for (i = n ; i <= n ; i++)
	{
		for (a = n; a <=  n; a++)
		{

			if (a > n)
			{
			_putchar((a / 10) + '0');
			}
			for (a = n; a <=  n; a++)
                {
                        if (a > n)
                        {
                        _putchar((a / 10) + '0');
                        }
                 _putchar((a % 10) + '0');
                }

		 _putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
