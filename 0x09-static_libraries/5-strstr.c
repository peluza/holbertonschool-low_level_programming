#include "holberton.h"

/**
 * _strpbrk - the print of the table
 * @s: the punters contain the caractert
 * @accept: punters result the operation
 *
 * Return: accept.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, c;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
			if (haystack[i]  == needle[c])
			{

				return (haystack + i);

			}
		}
	}
return ('\0');
}

