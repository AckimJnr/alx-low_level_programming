#include <string.h>
/**
 * print_name - function that prints a name
 * @name: a string of the given name
 * @f: pointer to a function that takes an array of chars and returns nothing
 *
 * Return: Returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
