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
	int x, y;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	x = x * y;
	printf("%d\n", x);
	return (0);
}
