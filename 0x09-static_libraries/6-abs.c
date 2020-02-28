#include "holberton.h"

/**
* _abs- exclude letter c
* @n: inteller to evaluate
* Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n < 0)
	{
		n = n * (-1);
			return (n);
	}
	return (0);
}
