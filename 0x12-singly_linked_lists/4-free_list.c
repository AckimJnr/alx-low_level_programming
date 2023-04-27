#include "main.h"
#include <stdlib.h>
/**
 * free_list - free the located list
 * @head: allocated mem location
 *
 * Return: Returns void
 */
void free_list(list_t *head)
{
	free(head);
}
