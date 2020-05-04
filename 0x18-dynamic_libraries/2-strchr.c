#include "holberton.h"

/**
 * *_strchr - the print of the table
 * @s: the punters
 * @c: the varibale is a  caracter
 *
 * Return: *s.
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
			return (0);
	}
	return (s);
}
