#include "lists.h"

/**
 * sum_listint - add the numbers of the list
 * @head: date for the punters
 * Return: value for remove
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a = head;

	if (a == NULL)
		return (0);
	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}
