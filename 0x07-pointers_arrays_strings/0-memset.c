#include "holberton.h"

/**
 * *_memset - the print of the table
 * @s: the punters
 * @b: the varibale is a  caracter
 * @n: numbers the bytes
 *
 * Return: *s.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
