#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elts in a linked list_t.
 * @h: Const pointer.
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
