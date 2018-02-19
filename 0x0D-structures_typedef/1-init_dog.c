#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog to be assessed
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
