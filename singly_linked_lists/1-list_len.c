#include <stdio.h>

#include "lists.h"

/**
 * list_len - Calcule la longueur d'une liste chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
