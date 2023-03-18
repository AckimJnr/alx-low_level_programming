#include <stdio.h>
/**
 * main - entry point
 * @letter - stores all alphabet chars 1 at a time
 *
 * Description: This program prints the alphabet in lowercase
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
