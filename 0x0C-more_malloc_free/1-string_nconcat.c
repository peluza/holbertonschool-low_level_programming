#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - check the code for Holberton School students.
 *
 * @s1: the punters one
 * @s2: the punters two
 * @n: the chars is number
 * Return: true return is addres memory is false return 98
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, x, a, b;
	char *e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	if (n >= i)
	{
		n = i;
	}
		e = malloc(sizeof(char) * ((x + n) + 1));
	if (e == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		e[a] = s1[a];

	}
	for (b = 0; b < n; b++)
	{
		e[a] = s2[b];
		a++;
	}
	e[x + n] = '\0';
	return (e);
}
