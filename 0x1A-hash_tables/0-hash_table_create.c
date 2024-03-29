#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 *
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;


	hash_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	memset(hash_table->array, 0, sizeof(hash_node_t *) * size);

	return (hash_table);
}
