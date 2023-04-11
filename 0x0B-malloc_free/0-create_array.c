#include <stdlib.h>
/**
 * create_array - Creates an array of specified size
 * @size: size of the array to be created
 * @c: size prototype
 *
 * Return: Return NULL if size given is 0, or return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *charry;
	int i;

	if (size  == 0)
		return (NULL);

	charry = malloc(sizeof(size));

	for (i = 0; i < size; i++)
		charry[i] = c;

	return (charry);
}
