#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free's a linked list
 * @head: head of the list
 *
 * Return: Returns void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
