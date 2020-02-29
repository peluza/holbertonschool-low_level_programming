#include <stdio.h>
#include <stdlib.h>

/**
 * main - the inition of the software
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
 *
 * Return: accept.
 */

int main(int argc, char *argv[])
{
	int e, d, m = 0;

	e = atoi(*(argv + 1));
	d = atoi(*(argv + 2));

	if (argc <= 1)
	{
		printf("Error");
	}
	else
	{
		m = e * d;
		printf("%i\n", m);
	}
	return (0);
}
