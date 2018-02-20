#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate string length
 * @s: string to be assessed
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if fx fails, dog data if fx succeeds
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		new_name[i] = name[i];
	}
	new_name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		new_owner[j] = owner[j];
	}
	new_owner[i] = '\0';
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
