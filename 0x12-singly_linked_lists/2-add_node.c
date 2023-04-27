#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Add a node at the begginning of a list
 * @head: pointer to a pointer of the first element
 * @str: string element
 *
 * Return: Returns a pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = (head != NULL && *head != NULL) ? (*head)->len : 0;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
