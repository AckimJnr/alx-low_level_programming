#include "main.h"
/**
 * times_table - prints times table
 *
 * Description: Prints the times table starting from 0 - 9
 * Return: Returns void
 */
void times_table(void)
{
	int firstnum;
	int secondnum;
	int product;

	for (firstnum = 0; firstnum < 10; firstnum++)
	{
		for (secondnum = 0; secondnum < 10; secondnum++)
		{
			product = firstnum * secondnum;
			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			if(secondnum == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
