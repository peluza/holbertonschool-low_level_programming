#include "lists.h"

/**
 * insert_nodeint_at_index - add new the paramters of the list
 * @head: date for the punters
 * @idx: ubication the date of the save
 * @n: date of the save
 * Return: value for the save
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *a = *head;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		a = add_nodeint(head, n);
		return (a);
	}
	while (i < idx)
	{
		a = a->next;
		if (a == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = a->n;
	new->next = a->next;
	a->n = n;
	a->next = new;
	return (a);
}
