#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Return the dog or NULL if the fuction fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pitbull;

	pitbull = malloc(sizeof(dog_t));

	if (pitbull == NULL)
		return (NULL);

	if (name != NULL)
	{
		pitbull->name = strdup(name);
	}
	else
		return (NULL);

	if (age > 0)
		pitbull->age = age;
	else
	{
		return (NULL);
	}

	if (owner != NULL)
	{
		pitbull->owner = strdup(owner);
	}
	else
	{
		return (NULL);
	}

	return (pitbull);
}
