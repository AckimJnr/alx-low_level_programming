#include "hash_tables.h"
/**
 * key_index - returns a suitable index of a hash table
 * @size: size of the array of the hash table
 * @key: key string given for the hash table
 *
 * Return: Return at which the key pair should be stored in
 * the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key =  hash_djb2(key);
	unsigned long int hash_index = hash_key % size;

	return (hash_index);
}
