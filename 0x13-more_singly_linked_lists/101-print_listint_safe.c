#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a list safely
 * @head: head of the list
 *
 * Return: returns the size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_number = 0;
	const listint_t *current = head, *next_node;

	if (head == NULL)
		return (node_number);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_number++;
		next_node = current->next;

		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
		current = next_node;
	}

	return (node_number);
}
