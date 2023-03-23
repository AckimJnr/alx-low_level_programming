/**
 * _isupper - checks if character is uppercase or not
 * @c: character to be checked
 *
 * Description: This function tests the cases of a character
 * Return: Return 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
