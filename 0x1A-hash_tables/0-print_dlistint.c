#include "hash_tables.h"

/**
 *print_dlistint - prints all the elemts of the dlistsint_s
 *@h: the lists for the estruct
 *Return:  the name of the nodos
 */

void print_ht(hash_table_t *ht)
{
	unsigned int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		printf("%i ------ ", i);
		if (!ht->array[i])
			printf("NULL\n");
		else
		{
			printf("key: %s -- value: %s\n", ht->array[i]->key, ht->array[i]->value);
		}
	}
}