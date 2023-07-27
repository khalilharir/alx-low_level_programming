#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: Cte double ptr of struct list_t for beginning
 * @str: Cte char pointer for data to be added
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *a;
	list_t *t;

	a  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		a->len = i;
		a->str = strdup(str);
		a->next = NULL;
		return (a);
	}

	t = *head;

	while (t->next != NULL)
		t = t->next;

	t->next = a;

	a->len = i;
	a->str = strdup(str);
	a->next = NULL;

	return (a);

}
