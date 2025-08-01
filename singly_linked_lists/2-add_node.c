#include <stdlib.h>
#include <string.h>

#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer of the first node of the list
 * @str: String to duplicate in the new node
 *
 * Return: Address of the new node, or NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (head == NULL || str == NULL) return (NULL);

	while (str[len]) len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
