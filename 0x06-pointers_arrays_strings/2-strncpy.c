#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - the funtion is copy of the string
 *
 * @dest: punter one
 * @src: punter two
 * @n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
