/**
 * _memset - invalidates the memory address of a memory location
 * @s: variable whose location should be invalidated
 * @b: bytes to fill a memory location
 * @n: multiplier of number of bytes to fill a memory location
 *
 * Return: Returns pointer location
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *loc = s;

	while (n--)
	{
		*loc++ = b;
	}

	return (s);
}
