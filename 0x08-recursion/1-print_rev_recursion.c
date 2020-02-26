#include "holberton.h"

/**
 * _print_rev_recursion - print in reverse used the recursion
 *
 * @s: the punters a evalue
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s <= '\0')
	{
		_putchar(*s);
		return;
	}
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
