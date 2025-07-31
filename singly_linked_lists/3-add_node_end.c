#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer of the first node of the list
 * @str: String to duplicate in the new node
 *
 * Return: Address of the new node, or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;
	char *dup_str;

	if (head == NULL || str == NULL) return (NULL);

	while (str[len]) len++;

	dup_str = strdup(str);
	if (dup_str == NULL) return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL) temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
