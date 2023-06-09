#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number whose sign needs to be checked
 *
 * Description: A function to print the number and sign of a given digit
 * Return: return 1 if n is > 0, returns 0 if n == 0, return -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
