#include "holberton.h"

/**
* print_most_numbers - the print numbers the 0 to 9
*
* Return: Always 0 (Success)
*/

void print_most_numbers(void)

{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (!(a == 2 || a == 4))
		_putchar(a + '0');
	}
_putchar('\n');
}
