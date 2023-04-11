#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns the pointer to the new string created
 */
char *str_concat(char *s1, char *s2)
{
	int totlen;
	char *str;
	int len1 = s1 == NULL ? 0 : strlen(s1);
	int len2 = s2 == NULL ? 0 : strlen(s2);

	totlen = len1 + len2;

	str = malloc(sizeof(char) * (totlen + 1));


	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(str, s1);

	if (s2 != NULL)
		strcpy(str + len1, s2);

	return (str);

}
