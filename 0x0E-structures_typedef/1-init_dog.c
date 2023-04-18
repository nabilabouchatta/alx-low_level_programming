#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a vaiable of typeof the dog struct
 * @d: array
 * @name: the name
 * @age: ghe age
 * @owner: the owner
 * Description: this is struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
