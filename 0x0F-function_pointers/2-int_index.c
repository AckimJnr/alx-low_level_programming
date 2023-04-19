#include <stdio.h>
/**
 * int_index - searches for an interger
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function to compare values
 *
 * Return: Returns an index of the location the element is found
 * Return -1 if there is no match and if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, status;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		status = cmp(array[i]);
		if (status != 0)
			return (i);
	}
	return (-1);
}
