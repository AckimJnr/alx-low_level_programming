#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: string to be sampled
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' )
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
