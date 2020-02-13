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
	int k;
	int b = 8;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (a = 0; a <=  9; a++)
		{
			_putchar(a + '0');
			
			if (a == 9)
			{	
				k = a - b;
				_putchar(k + '0');
			}

		}
		_putchar('\n');
	}
}
