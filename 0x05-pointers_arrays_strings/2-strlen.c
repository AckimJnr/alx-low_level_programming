/**
 * _strlen - counts the number of characters in a string
 * @s: variable to be processed
 *
 * Return: Returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
