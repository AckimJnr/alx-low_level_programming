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
	int index;

	if (len % 2 == 0)
	{
		index = len / 2;
	}
	else
	{
		index = (len - 1) / 2 + 1;
	}

	for (i = index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
