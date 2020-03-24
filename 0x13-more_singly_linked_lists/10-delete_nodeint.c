#include "lists.h"

/**
 * delete_nodeint_at_index - remove the paramters of the list
 * @head: date for the punters
 * @index: ubication the date of the remove
 * Return:1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cont;
	listint_t *a = *head, *b = *head;

	if (*head != NULL)
	{
		if (index == 0)
		{
			a = (*a).next;
			free(*head);
			(*head) = a;
			return (1);
		}
		for (cont = 0; cont < index; cont++)
		{
			if (a == 0)
				return (-1);
			if (cont < index - 1)
				b = (*b).next;
			a = (*a).next;
		}
		(*b).next = (*a).next;
		free(a);
		return (1);
	}
	return (-1);
}
