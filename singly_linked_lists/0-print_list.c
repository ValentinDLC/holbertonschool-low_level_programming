#include <stdio.h>

#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @h: pointer to the first node of the list
 *
 * Description: This function traverses a linked list and prints
 * each element with its length and string content. If a string is NULL,
 * it prints "(nil)" instead.
 *
 * Return: the total number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
