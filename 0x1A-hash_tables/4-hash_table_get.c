#include "hash_tables.h"
/**
 * hash_table_get - Retrives a value associated with a key
 * @ht: The hash table to look into
 * @key: the key
 *
 * Return: Return the value of the associated key,
 * or Null if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_key = hash_djb2((unsigned char *)key);
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_key % ht->size;

	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
