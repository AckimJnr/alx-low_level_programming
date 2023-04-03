/**
 * leet - encodes some characters with numbers
 * @str: string to be encoded
 *
 * Return: Return char
 */
#include <string.h>

char *leet(char *str)
{
	char *lowerCase = "aeotl";
	char *upperCase = "AEOTL";
	char *Replacement = "43071";
	int len = strlen(str);
	int i;
	int j;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lowerCase[j] || str[i] == upperCase[j])
			{
				str[i] = Replacement[j];
			}
		}
	}


	return (str);
}
