#include "main.h"
/**
 * print_alphabet_x10 - entry point function to the program
 *
 * Description: Prints lowercase alphabet on 10 lines
 * Return: Return 0 on successful exe or else !0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
