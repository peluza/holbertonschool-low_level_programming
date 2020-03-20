#include "lists.h"
/**
 * add_node - add of the nodes
 * @head: the lis for the estruct
 * @str: the chars a name
 * Return: the name of the nodos.
 */

list_t *add_node(list_t **head, const char *str)
{
	int cont;
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	new->str = strdup(str);
	cont = 0;
	while (str[cont] != 0)
		cont++;
	new->len = cont;
	new->next = *head;
	*head = new;
	if (new == 0)
	{
		return (0);
	}
	return (new);
	free(new->str);
	free(new);
}
