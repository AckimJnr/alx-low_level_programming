#include <string.h>
/**
 * rot13 - A Basic encryption algorithm
 * @str: string to be encrypted
 *
 * Return: return a pointer to the encrypted text
 */

char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;
	/** int len = strlen(str);*/
	int alphlen = strlen(output);

	while (*(str + i) != '\0')
	{
		for (j = 0; j < alphlen; j++)
		{
			if (*(str + i) == *(input + j))
			{
				*(str + i) = *(output + j);
				break;
			}
		}
		i++;
	}
	return (str);
}
