#include "main.h"
/**
 * _islower - check characters
 * @c: gets char to be checked
 *
 * Description: Checks character cases
 * Return: Return 1 if char is and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
