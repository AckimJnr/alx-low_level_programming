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
	int numarg = argc - 1;
	int fnum;
	int snum;

	if (numarg < 2)
		printf("Error\n");
	else
	{
		fnum = atoi(argv[1]);
		snum = atoi(argv[2]);

		printf("%d\n", fnum * snum);
	}

	return (0);
}
