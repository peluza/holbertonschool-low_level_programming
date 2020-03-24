#include "lists.h"

/**
 * free_listint2 - free the memory
 * @head: the lis for the estruct
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	head = NULL;
}
