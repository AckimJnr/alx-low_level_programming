#include "main.h"
/**
 * print_last_digit - prints the last digit of a #
 * @num: number to be checked
 *
 * Description: Function to print the last digit of a given number
 * Return: Return the last digit of a given number
 */
int print_last_digit(int num)
{
	int dgt;
	char str[2];
	int i;
	int len;

	if (num < 0)
		dgt = (-1 * num) % 10;
	else
		dgt = num % 10;

	str[0] = dgt + '0';
	str[1] = '\0';

	len = sizeof(str) / sizeof(str[0]);

	for (i = 0; i < len; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	return (dgt);
}
