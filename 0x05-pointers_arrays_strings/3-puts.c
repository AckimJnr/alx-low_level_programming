#include "main.h"
/**
 * _puts - prints a string to console
 * @str: string to be printed
 *
 * Return: Returns void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(str[i]);
	_putchar('\n');
}
