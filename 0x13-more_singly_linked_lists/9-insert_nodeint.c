#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a given index
 * @head: head node
 * @idx: index on which node is to be added
 * @n: data to be added a node idx
 *
 * Return: Returns a pointer to the node at the specified index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp != NULL && current_index < idx - 1)
	{
		temp = temp->next;
		current_index++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
