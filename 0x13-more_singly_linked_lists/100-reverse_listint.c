#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: returns pointer to the first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev_node = NULL;
	next_node = *head;


	while (next_node != NULL)
	{
		next_node = next_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (next_node);
}
