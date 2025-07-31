#include <stdlib.h>

#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the first node of the list
 *
 * Description: This function traverses a linked list and frees
 * each node, including the string stored in each node. It ensures
 * that all dynamically allocated memory is properly released to
 * prevent memory leaks.
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
