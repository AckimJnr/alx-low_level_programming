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

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
