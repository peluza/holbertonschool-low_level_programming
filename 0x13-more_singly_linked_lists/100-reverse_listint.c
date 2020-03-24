#include "lists.h"

/**
 * reverse_listint - reverse to the list
 * @head: date for the punters
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
