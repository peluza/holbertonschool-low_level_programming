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
