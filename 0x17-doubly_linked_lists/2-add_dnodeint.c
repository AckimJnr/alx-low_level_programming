#include "lists.h"

/**
 * add_dnodeint - adds a node at the head of the list
 * @head: head node of the list
 * @n: data to be added
 *
 * Return: Address of the new element or null upon failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = temp;
	new_node->n = n;

	if (temp != NULL)
	{
		temp->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
