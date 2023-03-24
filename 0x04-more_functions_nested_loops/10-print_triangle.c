#include "main.h"
/**
 * print_triangle - entry point
 * @size: size of the triable
 *
 * Description: Prints a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 2; j <= size - i; j++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
