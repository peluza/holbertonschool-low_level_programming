#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create new copy the dog
 * @d: punters
 * @name: name the new dog
 * @age: the age of the new dog
 * @owner: owner of the new dog
 * Return void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dg;
	int l1, l2, i, j;

	dog_t = dg;
	dg = malloc(sizeof(dog_t));
	if (dg == 0)
	{
		return (0);
	}
	l1 = strlen(name);
	l2 = strlen(owner);
	(*dg).name = malloc(sizeof(char) * (l1 +1));
	if ((*dg).name == 0)
	{
		free(dg);
		return (0);
	}
	(*dg).owner = malloc(sizeof(char)* (l2 + 1));
	if ((*dg).owne == 0)
	{
		free(dg.name);
		free(dg);
		return (0);
	}
	for (i = 0; i < l1; i++)
	{
		(*dg).name[i] = name[i];
	}
	for (j = 0; i < l2; j++)
	{
		(*dg).owner[j] = owner[j];
	}
	(*dg).age = age;
	(*dg).name[i] = 0;
	(*dg).owner[j] = 0;
	return (dg);
}
