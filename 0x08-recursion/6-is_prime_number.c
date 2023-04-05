/**
 * is_prime_number - checks if number is prime
 * @n: interger to be checked
 *
 * Return: return 1 if interger is prime else 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
		return (0);
	else if (n == 2 || n == -2)
		return (1);
	else if (n == 3 || n == -3)
		return (1);
	else if (n == 5 || n == -5)
		return (1);
	else if (n == 7 || n == -7)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}
