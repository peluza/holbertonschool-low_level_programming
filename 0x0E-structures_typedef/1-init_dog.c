#include"dog.h"

/**
 * init_dog - the strug dog
 * @name: name the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: punter
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}

