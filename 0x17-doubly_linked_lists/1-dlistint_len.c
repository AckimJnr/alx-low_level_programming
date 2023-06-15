#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a list
 * @h: heaa of the list
 *
 * Return: Returns the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t number_of_nodes = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		number_of_nodes += 1;
		temp = temp->next;
	}

	return (number_of_nodes);
}
