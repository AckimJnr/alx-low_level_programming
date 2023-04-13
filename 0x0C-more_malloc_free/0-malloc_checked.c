#include <stdlib.h>

/**
 * malloc_checked - function to alloc a mem location using malloc
 * @b: variable for which memory should be allocated
 *
 * Return: Return a void point of the created memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
