/**
 * print_array - prints specified number of array elements
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: void
 */
#include <stdio.h>
#include "main.h"
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	putchar('\n');
}
