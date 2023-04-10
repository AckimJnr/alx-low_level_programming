#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point function
 * @argc: number of arguments passed
 * @argv: array of string arguments
 *
 * Return: Return 0 on successful execution others !0
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int cents = 0;
	int numcoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents =  atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numcoins += cents / 25;
	cents %= 25;

	numcoins += cents / 10;
	cents %= 10;

	numcoins += cents / 5;
	cents %= 5;

	numcoins += cents / 2;
	cents %= 2;

	numcoins += cents;

	printf("%d\n", numcoins);

	return (0);
}
