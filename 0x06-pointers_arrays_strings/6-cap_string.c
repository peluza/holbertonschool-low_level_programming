#include "holberton.h"
#include <stdio.h>

/**
 **cap_string - the funtion is converte the upper
 *
 *@a: the punters
 *
 * Return: dest
 */

char *cap_string(char *a)
{
	int i, j;
	char b[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', 0};

	for (i = 0; a[i] != '\0'; i++)

	{
		for (j = 0; j <= 12; j++)
		{
			if (b[j] ==  a[i])
		{
			if (a[i + 1] >= 97  && a[i + 1] <= 122)

			{
				a[i + 1] -=  32;

			}
		}
		}
	}

return (a);
}
