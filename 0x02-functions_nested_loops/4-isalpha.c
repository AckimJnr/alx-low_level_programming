#include "main.h"
/**
 * _isalpha - check characters
 * @c: gets char to be checked
 *
 * Description: Checks character cases
 * Return: Return 1 if char is either uppercase or lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
