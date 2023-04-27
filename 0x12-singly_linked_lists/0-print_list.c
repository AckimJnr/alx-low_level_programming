#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - Prints elements of a list
 * @h: list struct to be printed
 *
 * Return: Returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;

	size_t number_of_nodes = 0;


	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
		}

		number_of_nodes++;
		temp = temp->next;
	}
	return (number_of_nodes);
}
