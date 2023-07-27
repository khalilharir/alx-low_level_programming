#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer to the linked list
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			i++;
			continue;
		}

		printf("[%d] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;

	}

	return (i);
}
