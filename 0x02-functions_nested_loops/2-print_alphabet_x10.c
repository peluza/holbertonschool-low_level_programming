#include "holberton.h"
/**
* print_alphabet_x10 - print alphabetx10
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{

	int ED;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (ED = 'a'; ED <= 'z'; ED++)
		{
		_putchar(ED);
		}
	_putchar('\n');
	}
}
