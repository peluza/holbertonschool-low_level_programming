#include "holberton.h"

/**
 * factorial  - the funsion is factorial
 *
 * @n: the punters a evalue
 *
 * Return: the result.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
