#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isletter(char *str);
/**
 * main - entry point function
 * @argc: number of arguments passed
 * @argv: array of string arguments
 *
 * Return: Return 0 on successful execution others !0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int i;
	int sum;
	int currentnum;

	for (i = 1; i < argc; i++)
	{
		if (argc <= 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			if (isletter(argv[i]) == 0)
			{
				currentnum = atoi(argv[i]);
				sum += currentnum;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * isletter - checks if a string containers letters
 * @str: string to be checked
 *
 * Return: Return 1 if it contains a letter 0 otherwise
 */
int isletter(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (1);
		}
	}
	return (0);
}
