#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of the data in a list
 * @head: head node
 *
 * Return: Returns the sum of the data interger n in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (sum);

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		sum += temp->n;
		if (temp->next == NULL)
			return (sum);

	}
	return (sum);
}
