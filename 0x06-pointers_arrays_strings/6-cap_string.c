#include "holberton.h"
#include <stdio.h>

/**
 **cap_string - the funtion is converte the upper
 *
 *@a: the punters
 *
 * Return: dest
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == a[0])

		{
			if (a[i + 1] >= 97  && a[i + 1] <= 122)

			{
				a[i + 1] -=  32;


			}
		}
	}
return (a);
}
