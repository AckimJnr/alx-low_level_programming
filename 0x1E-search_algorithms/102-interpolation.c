#include "search_algos.h"
/**
 * interpolation_search - searches for an element using interpolation search
 * @array: the array the element will be searched from
 * @size: the size of the array
 * @value: the value we are looking for
 *
 * Return: Returns the index at which the element is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while ((array[high]) != array[low]
			&& (value >= array[low])
			&& (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)
				/ (array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
	{
		printf("Value checked array[%d] = [%d]", low, array[low]);
		return (low);
	}
	else
	{
		printf("Value checked array[%d] is out of range\n", high);
		return (-1);
	}
}
