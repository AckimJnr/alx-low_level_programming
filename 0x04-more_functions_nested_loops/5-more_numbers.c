#include "main.h"
/**
 * more_numbers - prints numbers from 0 - 9
 * @c: character to be printed
 * Return: Returns void
 */
void print(char c);
void more_numbers(void)
{
	int n;
	int j;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				print((j / 10) + '0');
				print((j % 10) + '0');
			}
			else
				print(j + '0');
		}
		print('\n');
	}
}
/**
 * print - prints characters to the screen
 * @c: character to be printed
 *
 * Return: void
 */
void print(char c)
{
	_putchar(c);
}
