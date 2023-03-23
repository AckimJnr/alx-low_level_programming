#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Program to print all the multiple of 3 or 5 below 1024
 * Return: 0 on successfull execution
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	prinf("%d\n", sum);
	return (0);
}
