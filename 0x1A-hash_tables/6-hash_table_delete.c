#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
        unsigned long int i, size;

        if (ht == NULL || ht->array == NULL || ht->size == 0)
                return;

        size = ht->size;
        for (i = 0; i < size; i++)
                free_list(ht->array[i]);
        free(ht->array);
        ht->array = NULL;
        ht->size = 0;
        free(ht);
}
/**
 * free_list - free the memory
 * @head: the lis for the estruct
 */
void free_list(hash_node_t *head)
{
        if (head == NULL)
                return;
        if ((*head).next != NULL)
                free_list(head->next);
        free(head->key);
        free(head->value);
        free(head);
}
