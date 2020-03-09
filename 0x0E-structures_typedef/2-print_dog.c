#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: punters
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
		{
			(*d).name = "(nil)";
		}
		if (d->owner == 0)
		{
			(*d).owner = "(nil)";
		}
		printf("Mame: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner:%s\n", (*d).owner);
	}
}
