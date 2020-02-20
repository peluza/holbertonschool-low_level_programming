#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - the funtion is cocatene in the n
 * @n: the number
 * @dest: punter one
 * @src: punter two
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int dest_len = strlen(dest);

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';

return (dest);
}
