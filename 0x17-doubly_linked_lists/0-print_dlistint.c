#include "lists.h"
/**
 * print_dlistint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: Number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;

	size_t num_of_nodes = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		num_of_nodes += 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (num_of_nodes);
}
