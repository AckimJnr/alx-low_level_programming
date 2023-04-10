#include <stdio.h>
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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
