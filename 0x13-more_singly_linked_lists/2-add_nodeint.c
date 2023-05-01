#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of the list
 * @head: head pointer of the list
 * @n: data to be added
 *
 * Return: return pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
