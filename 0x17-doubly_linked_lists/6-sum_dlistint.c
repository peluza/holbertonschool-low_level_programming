#include "lists.h"

/**
 *sum_dlistint - get the value of the node
 *@head: the chars of the lists
 *Return: the sum of the value in the dlistint_t
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *tmp = head;

	if (head == 0)
		return (0);
	while (tmp)
	{
		i = i + tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
