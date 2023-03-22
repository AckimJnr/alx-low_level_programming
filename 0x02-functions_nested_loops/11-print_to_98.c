#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from 98 to or fro
 * @j: number to be printed
 *
 * Decription: Fuction to print numbers from or to 98
 * Return: Return Void
 */
void print_to_98(int j)
{
	if (j >= 98)
	{
		while (j > 98)
			printf("%d, ", j--);
		printf("%d\n", j);
	}
	else
	{
		while (j < 98)
			printf("%d, ", j++);
		printf("%d\n", j);
	}
}
