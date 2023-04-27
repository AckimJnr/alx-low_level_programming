#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end of a list
 * @head: head of the list
 * @str: string element of the current element
 *
 * Return: Returns a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
