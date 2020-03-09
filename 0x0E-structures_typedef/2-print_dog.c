#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: punters
 * Return void
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((d->name) == 0)
			(*d).name = "(nil)";
		if ((d->owner) == 0)
			(*d).owner = "(nil)";
		printf("name: %s\n", (*d).name);
		printf("age: %f\n", (*d).age);
		printf("owner: %s\n", (*d).owner);
	}
}
