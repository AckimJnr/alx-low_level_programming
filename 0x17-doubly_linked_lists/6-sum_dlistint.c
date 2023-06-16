#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - calculates the sum of all elements in a linked list
 * @h: head of the list
 *
 * Return: Number of nodes printed
 */
int sum_dlistint(dlistint_t *h)
{
	const dlistint_t *temp;
	int sum = 0;

	if (h == NULL)
		return (0);

	temp = h;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
