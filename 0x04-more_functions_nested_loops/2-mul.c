#include "holberton.h"

/**
* mul - the funtion is multiply
*
*@k: result for the multiply
*
*@a: the numbre a
*
*@b: the number b
*
* Return: Always 0 (Success)
*/

int mul(int a, int b)
{

	int k;

	if (a >= 48 && a <= 57 && b >= 48 && b <= 57)
	{
		k = a * b;
		return (k);
	}
	else
	{
		return (0);
	}
}
