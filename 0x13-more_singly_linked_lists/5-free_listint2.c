#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free's a linked list
 * @head: head of the list
 *
 * Return: Returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
