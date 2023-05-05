/**
 * clear_bit - sets bit to 0 at a particular index
 * @n: address of number
 * @index: index location to be set to 0
 *
 * Return: Returns 1 if it worked and -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	*n &= ~mask;

	return (1);
}
