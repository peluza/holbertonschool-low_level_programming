#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the inition of the software
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
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
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
