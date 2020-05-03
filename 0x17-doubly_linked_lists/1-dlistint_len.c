#include "lists.h"

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
