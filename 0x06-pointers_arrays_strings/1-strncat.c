#include "holberton.h"

/**
 * _strncat - the funtion is cocatene in the n
 * @s: the command _strlen
 * Return: dest
 */

int _strlen(char *s);

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int dest_len = _strlen(dest);

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';

return (dest);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - long of the str
 *
 * @s: the caracter
 *
 * Return: Always c.
 */

int _strlen(char *s)
{
	char a;
	int x, c;

	a = s[0];

	for (x = 0; a != '\0'; x++)
	{
		a = s[x];
		c = x;
	}

return (c);
}
