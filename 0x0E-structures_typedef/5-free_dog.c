#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: punters
 * Return void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d.name);
		free(d.age);
		free(d.owner);
		free(d);
	}
}

