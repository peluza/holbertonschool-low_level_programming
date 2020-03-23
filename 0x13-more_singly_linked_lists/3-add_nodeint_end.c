#include "lists.h"
/**
 * add_nodeint_end - add of the nodes in the end
 * @head: the lis for the estruct
 * @n: the number to list
 * Return: the name of the nodos.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *new;

	new = malloc(sizeof(listint_t));
	if (new == 0)
	{
		return (0);
	}
	new->n = n;
	new->next = 0;
	if (*head == 0)
	{
		*head = new;
	}
	else
	{
		a = *head;
		while (a->next != 0)
			a = a->next;
		a->next = new;
	}
	return (new);
}
