/**
 * _strlen_recursion - counts numbers in a string
 * @s: string of text to be counted
 *
 * Return: interger number of strings
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
