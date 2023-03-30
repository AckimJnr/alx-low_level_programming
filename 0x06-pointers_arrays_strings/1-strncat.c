/**
 * _strncat - concantenates two string
 * @dest: the string to be appended to
 * @src: the string to append
 * @n: maximum number of characters to be concatenated
 *
 * Return: return void
 */

#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
	int dlen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
