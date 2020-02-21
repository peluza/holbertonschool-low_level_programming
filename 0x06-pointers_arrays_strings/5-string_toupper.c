#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - the funtion is cocatene
 *
 *@a: the punters
 *
 * Return: dest
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{


		if
			(a[i] >= 97 && a[i] <= 122)

			{
				a[i] = a[i] - 32;

			}
	}

return (a);

}
