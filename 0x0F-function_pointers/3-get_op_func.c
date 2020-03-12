#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	if (s != 0)
		return (0);

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (strcmp(ops[i].op == s))
		{
			return (op[i].f);
		}
		i++;
	}
	return(0);
}
