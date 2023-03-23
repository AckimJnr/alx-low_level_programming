#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * @n - store random variable
 *
 * Description: This program generates a random number
 * Return: 0 after successful execution or else return 1
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return;
}
