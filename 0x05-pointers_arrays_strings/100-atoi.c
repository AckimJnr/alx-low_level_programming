/**
 * _atoi - convert string to interger
 * @s: string to be converted
 *
 * Return: int
 */
#include <ctype.h>
#include <limits.h>

int _atoi(char *s)
{
	int sign = 1;
	long int result = 0;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !num)
			sign = -1;
		else if (isdigit(*s))
		{
			result = result * 10 + (*s - '0');
			num = 1;
		}
		else if (num)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
