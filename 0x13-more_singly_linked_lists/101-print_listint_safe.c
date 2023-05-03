#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "lists.h"
/**
 * print_listint_safe - prints a list safely
 * @head: head of the list
 *
 * Return: returns the size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_number = 0, i, count = 0;
	const listint_t **visited_node = NULL;

	visited_node = malloc(sizeof(listint_t *) * 200);

	if (visited_node == NULL)
		exit(98);

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (visited_node[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				node_number++;
				free(visited_node);
				return (node_number);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		visited_node[count] = head;
		count++;
		head = head->next;
	}
	free(visited_node);

	return (node_number);
}
