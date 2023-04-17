#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes.
 * @d: struct
 * @name: *p name of the dog
 * @age: age of the dog
 * @owner: *p owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
