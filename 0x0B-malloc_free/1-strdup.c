#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string to be parsed and allocated memory
 *
 * Return: Returns null if insufficient memory is available or if str is null
 * Returns the point the the duplicate string if created
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	ptr = malloc(sizeof(*ptr) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, str);

	return (ptr);
}
