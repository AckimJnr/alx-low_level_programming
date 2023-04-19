#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: Return the result of interger addition
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - Substracts two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: Returns the result of the interger subtraction
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplies two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: returns the result of interger multiplication
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divides two intergers
 * @a: divisor
 * @b: dividend
 *
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - calculates modulo
 * @a: first number
 * @b: second number
 *
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
