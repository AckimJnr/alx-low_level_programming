#include <stdio.h>
#include "lists.h"

/**
 * listint_len - computes the number of elements in a list
 * @h: head of the linked list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
