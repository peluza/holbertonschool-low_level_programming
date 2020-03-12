#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - the inition of the software
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
 *
 * Return: accept.
 */

int main(int argc, char *argv[])
{
	int a, b, e;
	int (*ca)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
        b = atoi(argv[3]);
	if (get_op_func(argv[2]) != NULL || argv[1] == NULL || argv[3] == NULL) 
	{
		printf("Error\n");
                exit (99);

	}
	if ((*argv[2] == 47 || *argv[2]  == 37) && b == 0)
	{
		printf("Error\n");
                exit (100);
	}
	ca = get_op_func(argv[2]);
	e = ca (a,b);
	printf("%d\n", e);
	return (0);
}
