#include <string.h>
#include "main.h"

/**
 * _strstr - finds the first occurence of the substring ->
 * @needle: substring being searched for
 * @haystack: string of choice
 *
 * Return: Return pointer to first address of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int haylen = strlen(haystack);
	int needlen = strlen(needle);
	int i;

	if (haylen < needlen)
		return (NULL);

	for (i = 0; i <= haylen - needlen; i++)
	{
		if (strncmp(haystack + i, needle, needlen) == 0)
		{
			return ((char *) haystack + i);
		}
	}
	return (NULL);
}
