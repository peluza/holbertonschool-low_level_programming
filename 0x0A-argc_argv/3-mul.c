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
	int i, e, d,  mul = 0;
	char r[5] = "Error"; 

	e = atoi(*(argv + 1));
	d = atoi(*(argv + 2));

	for (i = 1; argv[i] != 0; i++)
	{	
		if (isalpha(*(argv[i])))
		{
			printf("%s\n", r);
			return (1);
		}
		if (!abs(*(argv[i])))
		{
			printf("%s\n", r);
			return (1);
		}
	}

	if (argc == 3)
	{
		mul = e * d;
		printf("%d\n", mul);
		return (0); 
	}

	else
	{
		printf("%s\n", r);
		return (1);
	}
	return (0);
}
