/**
 * _strcat - concantenates two strings
 * @dest: the string to be appended to
 * @src: the string to append
 *
 * Return: return void
 */

#include <string.h>
char *_strcat(char *dest, char *src)
{
	size_t dlen = strlen(dest);
	size_t i;

	for (i = 0; i < dlen && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
