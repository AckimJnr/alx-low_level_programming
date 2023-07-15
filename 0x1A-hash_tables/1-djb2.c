#include "hash_tables.h"
/**
 * hash_djb2 - creates a hash of a particular string
 * @str: string to be hashed
 *
 * Return: Returns an int hash of the string passed
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;

	while (*str != '\0')
		hash = ((hash << 5) + hash) + *str++;

	return (hash);
}
