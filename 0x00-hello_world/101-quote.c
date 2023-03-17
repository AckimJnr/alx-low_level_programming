#include <stdio.h>
/**
 * main - entry point of our application
 *@err - stores stderr
 * Description: program to print using the stderr
 * Return: Return 0 if successful else return 1
 */
int main(void)
{
	FILE *err = stderr;

	fprintf(err, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
