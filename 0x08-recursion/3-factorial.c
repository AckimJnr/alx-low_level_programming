/**
 * factorial - returns the factorial of a number
 * @n: number to be printed
 *
 * Return: Return interger factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
