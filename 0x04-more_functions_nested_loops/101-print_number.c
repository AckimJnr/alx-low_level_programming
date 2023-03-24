#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints numbers
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int absVal = abs(n);

	if (n < 0)
		_putchar('-');
	if (absVal >= 10 && absVal <= 99)
	{
		_putchar((absVal / 10) + '0');
		_putchar((absVal % 10) + '0');
	}
	else if (absVal >= 100 && absVal <= 999)
	{
		_putchar((absVal / 100) + '0');
		_putchar(((absVal / 10) % 10) + '0');
		_putchar((absVal % 10) + '0');
	}
	else if (absVal >= 1000 && absVal <= 9999)
	{
		_putchar((absVal / 1000) + '0');
		_putchar(((absVal / 1000) % 10) + '0');
		_putchar(((absVal / 10) % 10) + '0');
		_putchar((absVal % 10) + '0');
	}
	else
	{
		_putchar(absVal + '0');
	}
}
