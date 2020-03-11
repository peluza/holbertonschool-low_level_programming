#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: funtion a punters
 *
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	{
		(*f)(name);
	}


}
