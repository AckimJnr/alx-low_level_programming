/**
 * _strspn - checks byte in accept that are in s
 * @s: substring to be checked
 * @accept: base string
 *
 * Return: number of bytes in the initial segment of s of bytes in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *tmp_s = s;
	char *tmp;
	int len = 0;

	while (*tmp_s != '\0')
	{
		tmp = accept;

		while (*tmp != '\0' && *tmp != *tmp_s)
			++tmp;
		if (*tmp == '\0')
			break;
		++len;
		++tmp_s;
	}
	return (len);
}
