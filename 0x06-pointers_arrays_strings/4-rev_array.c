/**
 * reverse_array - reverse a given array
 * @a: the array to reverse
 * @n: the size of the array
 *
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
