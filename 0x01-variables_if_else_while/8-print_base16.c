#include <stdio.h>
/**
 * main - entry point
 * @hex - stores all the hexadecimals: 1 at a time
 *
 * Description: This program prints all the numbers of base 16
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
