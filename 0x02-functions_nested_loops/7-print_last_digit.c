#include "holberton.h"

/**
* print_last_digit - print_last_digit
*
*@n: variable the number
*
* Return: Always 0 (Success)
*/

int print_last_digit(int n)

{

	if (n < 0)
	{

		n = n % 10;
		n = n * -1;
		_putchar(n + '0');
	}


	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
return (n);
}
