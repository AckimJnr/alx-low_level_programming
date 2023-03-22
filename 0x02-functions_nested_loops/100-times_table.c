#include "main.h"
/**
 * print_times_table - prints times table
 * @n: multipiler
 *
 * Description: Prints the times table of n
 * Return: Returns void
 */
void print_times_table(int n)
{
	int firstnum;
	int secondnum;
	int product;

	if (n > 15 || n < 0)
		return;
	for (firstnum = 0; firstnum < n + 1; firstnum++)
	{
		for (secondnum = 0; secondnum < n + 1; secondnum++)
		{
			product = firstnum * secondnum;
			if (secondnum == 0)
				_putchar(product + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
				else if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product % 100) / 10));
				}
				else
				{
					_putchar('0' + (product / 10));
				}
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
