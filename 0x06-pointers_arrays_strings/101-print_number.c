/**
 * print_number - Prints a number
 * @n: number to be printed
 *
 * Return: void
 */

#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + 48);
}
