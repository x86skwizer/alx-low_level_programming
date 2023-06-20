#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name)
		d->name = name;
	else
		d->name = NULL;
	d->age = age;
	if (owner)
		d->owner = owner;
	else
		d->owner = NULL;
}
