#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatinates two strings
 * @ac: argument count
 * @av: arguments passed
 *
 * Return: Returns the pointer to the new string created
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, slen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
		slen += strlen(av[i]) + 1;

	str = malloc(sizeof(char *) * (slen));

	if (str == NULL)
		return (NULL);

	memset(str, 0, slen);

	for (i = 0, j = 0; i < ac; i++)
	{
		strcat(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}

	str[slen - 1] = '\n';
	return (str);
}
