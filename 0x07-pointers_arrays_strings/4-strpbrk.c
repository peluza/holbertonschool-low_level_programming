#include "holberton.h"

/**
 * _strpbrk - the print of the table
 * @s: the punters contain the caractert
 * @accept: punters result the operation
 *
 * Return: accept.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
			{

				return (s + i);

			}
		}
	}
return ('\0');
}
