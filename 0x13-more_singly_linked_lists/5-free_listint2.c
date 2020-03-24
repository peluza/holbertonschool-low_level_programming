#include "lists.h"

/**
 * free_listint2 - free the memory
 * @head: the lis for the estruct
 */

void free_listint2(listint_t **head)
{

	if (*head== NULL)
		return;
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
