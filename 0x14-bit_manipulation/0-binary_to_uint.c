#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a number from binary to interger
 * @b: pointer to a memory of chars
 *
 * Return: Returns the binary equivalent of the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		result += b[i] - '0';
	}

	return (result);
}
