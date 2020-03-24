#include "lists.h"

/**
 * get_nodeint_at_index - remove n element of the list
 * @head: date for the punters
 * @index: value at remove
 * Return: value for remove
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *a = head;

	if (a == NULL)
		return (NULL);
	while (i < index)
	{
		a = a->next;
		if (a == NULL)
			return (NULL);
		i++;
	}
	return (a);
}
