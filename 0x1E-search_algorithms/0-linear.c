#include "search_algos.h"
/**
 * linear_search - searches an array for a value using linear search
 * @array: a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value being searched for
 * Return: Return the first index of the element
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
