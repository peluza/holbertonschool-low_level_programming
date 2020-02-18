#include "holberton.h"
#include <stdio.h>

/**
 * _puts- print the word
 *
 * @str: the caracter
 *
 * Return: Always c.
 */

void _puts(char *str)
{
	char a;
	int x;

	a = str[0];

	for (x = 0; a != '\0'; x++)
	{
		a = str[x];
		_putchar(a);
	}
_putchar('\n');

}
