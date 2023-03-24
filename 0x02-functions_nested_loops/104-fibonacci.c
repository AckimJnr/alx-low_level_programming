#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int lim = 98;
	int i;
	unsigned int prenum = 0;
	unsigned int sucnum = 1;
	unsigned int step;

	for (i = 2; i <= lim; i++)
	{
		step = prenum + sucnum;
		printf("%u, ", step);
		prenum = sucnum;
		sucnum = step;
	}
	printf("\n");
	return (0);
}
