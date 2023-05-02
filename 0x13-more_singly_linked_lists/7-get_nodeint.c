#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a particular index
 * @head: head node
 * @index: index to be returned
 *
 * Return: Returns a pointer to the node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (current_index == index)
			return (temp);
		temp = head->next;
		head = temp;
		current_index++;
	}
	return (NULL);
}
