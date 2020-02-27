#include "holberton.h"

/**
 * is_prime_number1  - the number prime number 
 * 
 * @n: the character number
 *
 * Return: the result.
 */

int is_prime_number1(int n, int b)
{

	if (n % b == 0)
	{
		return (1 + is_prime_number1(n, b + 1));

	}

	else
		return (0 + is_prime_number1(n, b + 1));
}

#include "holberton.h"


/**
 * is_prime_number  - the number prime number
 *
 * @n: the character number
 *
 * Return: the result.
 */

int is_prime_number(int n)

{
	int d = is_prime_number1(n, b);

	if (d == 2)
        {
                return (1);
        }
	else 
	{
		return (0);
	}
	
	return	(is_prime_number1(n, 1));
}
