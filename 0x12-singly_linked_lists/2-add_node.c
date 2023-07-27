#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: cte double pointer of structure list_t for beginning
 * @str: cte char ptr for data to be added
 * Return: list with new node for list_t list, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *a;

	a  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		a->str = NULL;
		a->len = 0;
		a->next = *head;
	}

	if (a == NULL)
		return (NULL);

	a->next = *head;
	*head = a;

	a->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	a->len = i;

	return (a);
}
