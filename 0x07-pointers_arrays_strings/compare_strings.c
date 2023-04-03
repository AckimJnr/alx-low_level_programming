/**
 * comp_strns - compares two strings and checks number of similar chars
 * @firstStr: first String
 * @secStr: second string
 * @n: number of characters to be checked
 * Return: 0 if string are equal or otherwise
 */

int comp_strns(char *firstStr, char *secStr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (firstStr[i] == '\n' || firstStr[i] != secStr[i])
			return (firstStr[i] - secStr[i]);
	}
	return (0);
}
