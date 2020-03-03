#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - the funtion is cocatene in the n
 * @s: the command _strlen
 * Return: dest
 */


int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	int i, x, a, b;
	char *n;

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
	n = malloc(sizeof(char) * ((i + x) + 1));
	if (n == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		n[a] = s1[a];

	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		n[a] = s2[b];
		a++;
	}
	n[i + x] = '\0';
	return (n);
}
