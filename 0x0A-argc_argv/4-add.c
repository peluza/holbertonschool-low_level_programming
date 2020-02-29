#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strpbrk - the print of the table
 * @s: the punters contain the caractert
 * @accept: punters result the operation
 *
 * Return: accept.
 */

int main(int argc, char *argv[])
{
	int x, e = 0;

	if (argc < 1)
	{
		printf("\n0");
	}

	for(x = 1; *argv[x] != '\0'; x++)
	{
		if (!isdigit(*(argv[x])))
		{
			printf("\nError");
			return (1);
		}
	}


	for(x = 1; *argv[x] != '\0'; x++)
	{
		e = e +  atoi(argv[x]);
	}
	printf("\n%d", e);
	return (0);
}
