#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: Hash table where the element is to be added
 * @key: the key of the value
 * @value: value to be inserted at a particular key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int table_size = 0, item_position = 0;
	unsigned long int hash_index = hash_djb2((unsigned char *)key);
	hash_node_t *hash_data = malloc(sizeof(hash_node_t));

	if (hash_data == NULL || ht == NULL || key == NULL || *key == '\0')
		return (0);
	table_size = ht->size;
	item_position = hash_index % table_size;
	hash_data->key = strdup(key);
	hash_data->value = strdup(value);
	if (hash_data->key == NULL || hash_data->value == NULL)
	{
		free(hash_data->key);
		free(hash_data);
		return (0);
	}
	hash_data->next = NULL;
	if (item_position > ht->size)
		return (0);
	if (ht->array[item_position] != NULL)
	{
		hash_node_t *current = ht->array[item_position];

		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(hash_data->key);
				free(hash_data->value);
				free(hash_data);
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
			current = current->next;
		}
	}
	hash_data->next = ht->array[item_position];
	ht->array[item_position] = hash_data;
	return (1);
}
