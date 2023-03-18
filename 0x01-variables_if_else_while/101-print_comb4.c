#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints all possible combinations of three digits
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	int i;
	int j;
	int h;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (h = j + 1; h <= 57; h++)
			{
				putchar(i);
				putchar(j);
				putchar(h);
				if (i == 55 && j == 56 && h == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
