/**
 * _strcpy - copy string to and fro
 * @dest: destination
 * @src: string source
 *
 * Return: char
 */
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
