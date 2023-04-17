#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises the properties of the dog type
 * @d: the type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: function returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name != NULL)
			d->name = name;

		d->age = age;
		if (owner != NULL)
			d->owner = owner;
	}

}
