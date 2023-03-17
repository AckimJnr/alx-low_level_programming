#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints numbers from 0 - 9
 * Return: 0 after successful execution or else return 1
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
