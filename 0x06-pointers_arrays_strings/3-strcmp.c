/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns a 0 if s1 and s2 are equal
 * Returns a negative if s1 is less than s2
 * Returns a positive if s1 is greater that s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(const unsigned char *)s1 - *(const unsigned char *) s2);
}
