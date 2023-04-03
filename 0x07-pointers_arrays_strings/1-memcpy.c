/**
 * _memcpy - copies memory n bytes of memory from one var to another
 * @dest: location to be copied to
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: Returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}

	return (dest);
}
