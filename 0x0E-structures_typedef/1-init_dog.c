#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes dog
* @d: dog
* @name: name
* @age: age
* @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

