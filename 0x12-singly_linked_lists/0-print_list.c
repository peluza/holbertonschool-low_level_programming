#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the lis for the estruct
 * Return: the name of the nodos.
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h != 0)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
