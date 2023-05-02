#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delets the first item on the list
 * @head: head of the list
 *
 * Return: returns the data on the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data = 0;

	if (head == NULL || *head == NULL)
		return (head_data);
	temp = (*head);
	(*head) = (*head)->next;
	head_data = temp->n;

	free(temp);

	return (head_data);
}
