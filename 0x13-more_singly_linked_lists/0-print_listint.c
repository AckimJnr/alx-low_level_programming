#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints out all data in a linked list
 * @h: head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
