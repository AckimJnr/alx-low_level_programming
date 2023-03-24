#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when successfully executed
 */
int main(void)
{
	long int num = 612852475143;
	int i;
	int largest = 1;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}
	printf("%d\n", largest);
	return (0);
}
