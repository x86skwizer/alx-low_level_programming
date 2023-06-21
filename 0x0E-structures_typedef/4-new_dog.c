#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creat new struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct type *t_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	if (name)
		dog->name = name;
	else
		dog->name = NULL;
	dog->age = age;
	if (owner)
		dog->owner = owner;
	else
		dog->owner = NULL;
	return (dog);
}
