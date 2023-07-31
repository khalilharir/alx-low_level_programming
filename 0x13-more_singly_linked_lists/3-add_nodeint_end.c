#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to an adress.
 * @n: int.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *z;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (*head == NULL)
		*head = a;

	else
	{
		z = *head;
		while (z->next != NULL)
			z = z->next;
		z->next = a;
	}

	return (*head);
}
