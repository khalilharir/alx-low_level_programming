#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: A pointer to an adress.
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}

	head = NULL;
}
