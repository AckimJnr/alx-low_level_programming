#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: return void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
