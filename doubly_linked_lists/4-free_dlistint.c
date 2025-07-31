#include <stdlib.h>

#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees all the nodes in a doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
