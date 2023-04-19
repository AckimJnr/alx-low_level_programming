#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - 2 interger calculator
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: Does not return anything
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int result;
	int (*func)(int, int);


	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(98);
	}

	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = argv[2];
		b = atoi(argv[3]);
		func = get_op_func(op);
		result = func(a, b);

		printf("%d\n", result);

	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
