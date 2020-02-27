#include "holberton.h"

/**
 * _sqrt_recursion1 - the funsion is multiple
 * @n: the character number
 * @b: the caracter number multipiler
 *
 * Return: the result.
 */

int _sqrt_recursion1(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	if (b > n)
	{
		return (-1);
	}

	else
		return (_sqrt_recursion1(n, b + 1));
}

#include "holberton.h"


/**
 * _sqrt_recursion - the character number for the multiplie
 * _sqrt_recursion1 - the funsion is multiple
 * @n: the character number
 *
 * Return: the result.
 */

int _sqrt_recursion(int n)
{
	return	(_sqrt_recursion1(n, 1));
}


