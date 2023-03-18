#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints all possible combinations of single digits
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	unsigned int digit;

	for (digit = 48 ; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
