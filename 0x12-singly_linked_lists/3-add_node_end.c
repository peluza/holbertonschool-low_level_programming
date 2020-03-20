#include "lists.h"
/**
 * add_node_end - add of the nodes in the end
 * @head: the lis for the estruct
 * @str: the chars a name
 * Return: the name of the nodos.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int cont;
	list_t *a, *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == 0)
	{
		return (0);
	}
	new->str = strdup(str);
	cont = 0;
	while (str[cont] != 0)
		cont++;
	new->len = cont;
	new->next = 0;
	if (*head == 0)
	{
		*head = new;
	}
	else
	{
		a = *head;
		while (a->next != 0)
			a = a->next;
		a->next = new;
	}
	return (new);
}
