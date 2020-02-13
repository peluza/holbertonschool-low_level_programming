#include "holberton.h"

/**
* more_numbers - the print numbers the 0 to 14
*
* Return: Always 0 (Success)
*/

void more_numbers(void)

{
	int a;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (a = 0; a <=  14; a++)
		{
			if (a > 9)
			{
			_putchar((a / 10) + '0');
			}
		 _putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
