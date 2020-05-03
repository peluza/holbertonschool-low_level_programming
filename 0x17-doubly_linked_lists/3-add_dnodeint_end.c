#include "lists.h"

/**
 *add_dnodeint_end - add the nodes  to end of the dlistint_t
 *@head: the chars of the lists
 *@n: the number coitainrs in the lists
 *Return: of the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	tmp = *head;
	if (head == 0)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = 0;
	new->prev = 0;
	if (*head == 0)
		*head = new;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
