#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a list
 * @h: head of the list
 *
 * Return: Returns the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t number_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		number_of_nodes += 1;
		temp = temp->next;
	}

	return (number_of_nodes);
}
