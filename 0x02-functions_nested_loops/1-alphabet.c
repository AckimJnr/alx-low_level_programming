#include "main.h"
/**
 * print_alphabet - entry point function to the program
 *
 * Description: Prints lowercase alphabet
 * Return: Return 0 on successful exe or else !0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
