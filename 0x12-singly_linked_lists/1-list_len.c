#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list.
 * @h: the lis for the estruct
 * Return: the name of the nodos.
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h != 0)
	{
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
