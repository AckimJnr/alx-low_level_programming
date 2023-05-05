/**
 * flip_bits - calculates the number of bits to be flipped
 * from one number to another
 * @n: from number
 * @m: to number
 *
 * Return: Returns the number of bits that need to be flipped
 * to get from n - m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_of_bits = 0;

	while (n || m)
	{
		if ((n ^ m) & 1)
			number_of_bits++;
		n >>= 1;
		m >>= 1;
	}

	return (number_of_bits);
}
