#include "lists.h"

/**
 *get_dnodeint_at_index - get the value of the node
 *@head: the chars of the lists
 *@index: position of the nodes
 *Return: of the head in the position the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == 0)
		return (0);
	while (i != index)
	{
		if (tmp == 0)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
