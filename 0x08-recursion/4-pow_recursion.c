#include "holberton.h"

/**
 * _pow_recursion  - the funsion is pow factorial
 *
 * @x: the character number
 * @y: the character number
 *
 * Return: the result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
