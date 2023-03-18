#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints all possible combinations of two digits
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
