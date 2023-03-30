/**
 * string_toupper - converts chars in an array to uppercase
 * @str: the string to be coverted
 *
 * Return: returns void
 */
#include <string.h>

char *string_toupper(char *str)
{
	int len = strlen(str);
	int c, i;

	for (i = 0; i < len; i++)
	{
		c = str[i];
		if (c >= 97 && c <= 122)
			str[i] -= 32;
	}
	return (str);
}
