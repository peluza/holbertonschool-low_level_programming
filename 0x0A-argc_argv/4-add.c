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
	int i, sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; argv[i] != 0; i++)
		{ 
			if (!isdigit(*(argv[i])))
			{
				printf("Error\n");
				return(1);
			}
			else 
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum );
	}
	return (0);
}
