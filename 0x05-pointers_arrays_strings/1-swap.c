/**
 * swap_int - swaps two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
