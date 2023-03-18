#include <stdio.h>
/**
 * main - entry point
 * @num - loop counter
 *
 * Description: This program prints chars 0 - 9, using ascii code
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
