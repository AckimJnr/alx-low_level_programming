#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the struct dog
 * @d: dog to be printed
 *
 * Return: the function returns void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age > 0 ? d->age : 0.0);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
