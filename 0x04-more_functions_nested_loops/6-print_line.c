#include "main.h"

/**
 * print_line - prints a line on console
 * @n: determines the length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
