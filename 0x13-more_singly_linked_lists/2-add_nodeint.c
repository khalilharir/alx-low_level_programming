#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to an adress.
 * @n: int.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = *head;

	*head = a;

	return (a);
}
