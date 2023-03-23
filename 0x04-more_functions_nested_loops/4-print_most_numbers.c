#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 - 9
 *
 * Return: Returns void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n);
	}
	_putchar('\n');
}
