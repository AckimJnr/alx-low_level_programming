#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the located list
 * @head: allocated mem location
 *
 * Return: Returns void
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	if (head == NULL)
		return;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
