#include "lists.h"

/**
 * free_listint - free the memory
 * @head: the lis for the estruct
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if ((*head).next != NULL)
		free_listint((*head).next);
	free(head);
}
