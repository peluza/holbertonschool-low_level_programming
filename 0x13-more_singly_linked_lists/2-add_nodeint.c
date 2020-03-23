#include "lists.h"
/**
 * add_nodeint - add of the nodes
 * @head: the lis for the estruct
 * @n: the numbero to list
 * Return: the name of the nodos.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	if (new == 0)
	{
		return (0);
	}
	return (new);
}
