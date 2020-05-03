#include "lists.h"

/**
 *insert_dnodeint_at_index - insert at vlaue the index in the dlistint_t
 *@h: the chars of the lists
 *@idx: position of the nodes
 *@n: the value of the number at insert
 *Return: the value at insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0, len = 0;

	if (h == 0 || (*h == 0 && idx > 0))
		return (0);
	if (idx == 0)
		return (add_dnodeint(h, n));
	len = dlistint_len(*h);
	if (idx > len)
		return (0);
	if (idx == len)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->next = 0;
	new->prev = 0;
	for (i = 0; idx != i; i++)
		tmp = tmp->next;
	tmp->prev->next = new;
	new->next = tmp;
	return (new);
}
/**
 *dlistint_len - prints all numbers the elemts of the dlistsint_s
 *@h: the lists for the estruct
 *Return:  the name of the nodos
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodes = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
