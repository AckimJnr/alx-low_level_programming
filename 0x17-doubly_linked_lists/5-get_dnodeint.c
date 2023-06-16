#include "lists.h"

/**
 * get_dnodeint_at_index - gets data at a specific index
 * @head: head of the list
 * @index: index of data
 *
 * Return: Returns a pointer to the index location or null if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (counter == index)
			return (current);
		current = current->next;
		counter++;
	}

	return (NULL);
}
