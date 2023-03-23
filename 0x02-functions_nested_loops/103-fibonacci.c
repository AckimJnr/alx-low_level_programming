#include <stdio.h>
/**
 * main - entry
 *
 * Decription: fibonacci sum
 * Return: always 0
 */
int main(void)
{
	int max = 4000000;
	int term1 = 1;
	int term2 = 2;
	int nextTerm = term1 + term2;
	int sum = 2;

	while (nextTerm <= max)
	{
		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
	}
	printf("%d\n", sum);
	return (0);
}
