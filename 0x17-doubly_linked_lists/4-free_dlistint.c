#include "lists.h"
/**
 * free_dlistint - free the memory
 * @head: the lis for the estruct
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if ((*head).next != NULL)
		free_dlistint((*head).next);
	free(head);
}
