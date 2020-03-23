#include "lists.h"

/**
 * pop_listint - remove first value
 * @head: date for the punters
 * Return: value for remove
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (!*head)
		return (0);
	else
	{
		b = (*head)->n;
		a = (*head)->next;
	}
	free(*head);
	*head = a;
	return (b);
}
