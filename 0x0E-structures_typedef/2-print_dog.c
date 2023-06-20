#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else
		printf("Name: (nil)\nAge: 0\nOwner: (nil)");
}
