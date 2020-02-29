#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - the print of the table
 * @s: the punters contain the caractert
 * @accept: punters result the operation
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
		printf("%i""\n", m);
	}
	return (0);
}
