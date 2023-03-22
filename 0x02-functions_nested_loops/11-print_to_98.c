#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from 98 to or fro
 * @num: number to be printed
 *
 * Decription: Fuction to print numbers from or to 98
 * Return: Return Void
 */
void print_to_98(int num)
{
	int i;

	if (num < 98)
	{
		for (i = num; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		putchar('\n');
	}
	else if (num > 98)
	{
		for (i = num; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		putchar('\n');
	}
	else if( num == 98)
	{
		printf("%d \n", num);
	}
}
