#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size = 0, i = 0;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
