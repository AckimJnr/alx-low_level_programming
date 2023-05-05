/**
 * get_bit - Returns the value at a particular index
 * @n: number where the index is to be found
 * @index: the index we are looking for
 *
 * Return: Return the value at particular index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	return ((n & mask) != 0);
}
