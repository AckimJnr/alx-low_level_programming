#include <string.h>
/**
 * _strpbrk - locates 1st occurrence of s bytes in accept
 * @s: string to be parsed
 * @accept: bytes of this string will be checked in s
 *
 * Return: Returns pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *tmp = s;
	char *tmp_acc;

	while (*tmp != '\0')
	{
		tmp_acc = accept;
		while (*tmp_acc != '\0')
		{
			if (*tmp == *tmp_acc)
				return ((char *) tmp);
			++tmp_acc;
		}
		++tmp;
	}

	return (NULL);
}
