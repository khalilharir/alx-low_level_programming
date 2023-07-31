#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: A pointer to an adress.
 * Return: If the linked list is empty - 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (*head == NULL)
		return (0);

	x = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(x);

	return (i);
}
