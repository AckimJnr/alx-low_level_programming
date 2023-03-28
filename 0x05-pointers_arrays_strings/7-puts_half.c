/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
#include <string.h>
#include "main.h"
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 != 0)
	{
		for (i = (len) / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len / 2); i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
