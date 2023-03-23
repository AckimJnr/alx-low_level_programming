/**
 * _isdigit - checks if character is uppercase or not
 * @c: character to be checked
 *
 * Description: This function tests the cases of a character
 * Return: Return 1 if c is uppercase and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
