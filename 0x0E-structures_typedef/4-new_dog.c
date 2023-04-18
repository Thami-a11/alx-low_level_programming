#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);
	dog->owner = malloc(strlen(owner) + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;

	strcpy(dog->owner, owner);

	return (dog);
}
