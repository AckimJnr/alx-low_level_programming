#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: tabel to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	int first_key = 1;

	if (ht == NULL)
		printf("{}");
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!first_key)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_key = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
