#include "lists.h"

/**
 * delete_nodeint_at_index - remove the paramters of the list
 * @head: date for the punters
 * @index: ubication the date of the remove
 * Return:1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *a = *head;

	if (head == 0)
		return (-1);
	if (index == 0)
	{
		*head = a->next;
		free(a);
		return (1);
	}
	while (i < index)
	{
		a = a->next;
		if (a == 0)
			return (-1);
		i++;
	}
	node = a->next;
	a->n = a->next->n;
	a->next = a->next->next;
	free(node);
	return (1);
}
