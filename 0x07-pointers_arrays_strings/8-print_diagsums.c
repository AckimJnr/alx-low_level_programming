/**
 * print_diagsums - prints sums of the diagonals
 * @a: array
 * @size: array size
 *
 */
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum1 += *(a + i * size +(size - 1 - i));
	}
	printf("%d, %d\n", sum, sum1);
}
