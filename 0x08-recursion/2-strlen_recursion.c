#include "holberton.h"

/**
 * _strlen_recursion - tell character
 *
 * @s: the punters a evalue
 *
 * Return: the result.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
