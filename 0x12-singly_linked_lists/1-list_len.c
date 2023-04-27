#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Prints elements of a list
 * @h: list struct to be printed
 *
 * Return: Returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;

	size_t number_of_nodes = 0;


	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		number_of_nodes++;
		temp = temp->next;
	}
	return (number_of_nodes);
}
