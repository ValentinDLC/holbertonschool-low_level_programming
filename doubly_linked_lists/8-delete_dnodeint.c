#include <stdlib.h>

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL) return (-1);

	current = *head;
	count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL) return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL) current->next->prev = current->prev;

	free(current);
	return (1);
}
