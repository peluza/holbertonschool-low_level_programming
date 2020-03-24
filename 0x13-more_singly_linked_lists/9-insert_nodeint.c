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
	listint_t *new, *tmp, *aux = *head;
	unsigned int i, j;

	for (i = 0; aux != NULL; i++)
	{
		aux = (*aux).next;
	}
	if (idx > i)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}
	if (head == NULL)
		return (NULL);
	tmp = *head;
	for (j = 0; j < idx - 1 && tmp->next; j++)
	{
		tmp = (*tmp).next;
	}
	(*new).next = (*tmp).next;
	(*tmp).next = new;
	return (new);
}
