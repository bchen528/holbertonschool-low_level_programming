#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to be assessed
 */

void print_dog(struct dog *d)
{
	int i;

	if (d == NULL)
		return;
	for (i = 0; i < 3; i++)
	{
		if ((void *)d == NULL)
			printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
