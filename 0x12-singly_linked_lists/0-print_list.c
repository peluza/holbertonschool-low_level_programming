#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
		if (h->str == 0)
			printf("[%u] (nill)", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}

