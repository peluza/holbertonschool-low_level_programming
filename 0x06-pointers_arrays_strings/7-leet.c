#include "holberton.h"
#include <stdio.h>

/**
 * *leet - the change in the caracter especific
 *@a: punters
 * Return: Always 0.
 *
 */

char *leet(char *a)
{
	int x, y;
	int e[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int d[] = {'4', '3', '0', '7', '1'};

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == e[y])
			{
				a[x] = d[y / 2];
				y = 9;
			}
		}
	}
return (a);
}
