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
	char *tmpsrc = src;
	char *tmpdest = dest;
	unsigned int i = 0;

	while (i < n)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}

	return (dest);
}
