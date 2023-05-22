#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the dog struct
 * struct dog - a new type of data
 * @d: the dog struct
 * @name: name of doggg
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
