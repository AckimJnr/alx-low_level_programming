#include <string.h>
/**
 * _strchr - search a string and return the pointer to first occurence
 * @s: string to be searched
 * @c: search char
 *
 * Return: Return pointer of the firt occurence of the item
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}
