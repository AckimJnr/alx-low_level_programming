#include "main.h"
/**
 * print_square - print squares
 * @n: size of square
 *
 * Return: void
 */
void print_square(int n)
{
	int row;
	int col;

	if (n <= 0)
		_putchar('\n');
	else
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
