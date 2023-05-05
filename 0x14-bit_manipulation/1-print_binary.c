#include "main.h"
/**
 * print_binary - prints the binary equivalent of a number
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	unsigned long int mask = 1UL << (bits - 1);
	int isprinted = 0;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (isprinted)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			isprinted = 1;
		}

		mask >>= 1;
	}
	if (!isprinted)
		_putchar('0');
}
