#include <stdlib.h>
/**
 * array_iterator - iterates over an array executing a function
 * @array: the given array
 * @size: size of the array
 * @action: the function to be executed
 *
 * Return: Does not return any thing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
