#include "holberton.h"

/**
 * *_memcpy - the print of the table
 * @dest: the punters is a caracter
 * @src: the puntrs is a  caracter
 * @n: numbers the bytes
 *
 * Return: *s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
