#include "search_algos.h"
/**
 * binary_search - searches through an array using binary search
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return: Return the index of that element in the array
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	size_t m = 0;
	int i = 0;

	while (L <= R)
	{
		m = (L + R) / 2;
		printf("Searching in array: ");

		for (i = L; i <= R; ++i)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
