#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Cte double ptr of struct list_t for beginning.
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
