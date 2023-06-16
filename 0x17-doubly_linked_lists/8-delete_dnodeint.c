#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at specific index
 * @head: head of the list
 * @index: index where node is to be deleted
 *
 * Return: returns 1 on successfull delete or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
