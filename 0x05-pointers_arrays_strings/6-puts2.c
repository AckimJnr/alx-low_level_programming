#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * @str: string to be sampled
 *
 * Return: void
 */
void puts2(char *str)
{
	unsigned len = strlen(str);
	unsigned i;
	
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
