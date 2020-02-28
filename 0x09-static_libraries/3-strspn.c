#include "holberton.h"

/**
 * _strspn - the print of the table
 * @s: the punters contain the caractert
 * @accept: punters result the operation
 *
 * Return: accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, c, b = 0;

	for (i = 0; s[i] != ','; i++)
	{

		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
			{
				b++;
				break;
			}
		}

		if (s[i] != accept[c])
		{
			break;
		}
	}
return (b);
}
