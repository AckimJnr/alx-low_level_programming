int refine_sqrt(int n, int res);
/**
 * _sqrt_recursion - find square root of a number using recursion
 * @n: base
 *
 * Return: x to the power y
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (refine_sqrt(n, n));
}

/**
 * refine_sqrt - helps sqrt computation
 * @n: number to be calcurated
 * @res: result projection
 * Return: return -1 if n does not have a natural sqrt
 */

int refine_sqrt(int n, int res)
{
	long int dif = (res * res - n) / (2 * res);

	if (res == 0)
		return (-1);
	if (dif == 0)
		return (res);
	if (dif < 0)
		dif = -dif;
	return (refine_sqrt(n, (res + n / res) / 2));
}
