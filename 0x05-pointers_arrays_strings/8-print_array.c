#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print array
 *@a: detect line
 *@n: detec number
 */

void print_array(int *a, int n)
{


	int *e = a;
	int *d = a;
	int i = n;

	while (n - 1)
	{
		d++;
		n--;
	}
	while (e <= d)
	{
		while (i--)
		{
			if (e < d)
			{
				printf("%d, ", *e);
				e++;
			}
			else
			{
				printf("%d", *e);
				e++;
			}
		}
		printf("\n");
	}
}
