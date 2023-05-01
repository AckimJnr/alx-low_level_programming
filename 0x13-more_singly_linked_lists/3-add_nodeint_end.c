#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: head pointer of the list
 * @n: data to be added
 *
 * Return: return pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
