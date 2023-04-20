#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: first argument
 *
 * Return: Returns the sum of all the parameters passed
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	long int sum = 0;
	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{

		sum += va_arg(arguments, long int);
	}

	return (sum);
}
