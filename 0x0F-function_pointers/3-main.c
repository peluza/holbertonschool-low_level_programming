#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - the funtion performs mathematical operations
 * @argc: the parameter is account
 * @argv: the parameter is a punter the text a the title
 *
 * Return: accept.
 */

int main(int argc, char *argv[])
{
	int a, b, e;
	char *opr;
	int (*ca)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opr = argv[2];
	if (get_op_func(opr) != NULL || argv[1] == NULL || argv[3] == NULL)
	{
		printf("Error\n");
		exit(99);

	}
	if ((*opr == 47 || *opr == 37) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ca = get_op_func(opr);
	e = ca(a, b);
	printf("%d\n", e);
	return (0);
}
