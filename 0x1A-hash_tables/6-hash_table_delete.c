#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
        unsigned long int i, size;
        hash_node_t *tmp = NULL, *aux = NULL;

        size = ht->size;
        for (i = 0; i < size; i++)
        {
                aux = ht->array[i];
                while (aux)
                {
                        free(aux->key);
                        free(aux->value);
                        tmp = aux->next;
                        free(aux);
                        aux = tmp;
                }
                free(aux);
        }
        free(ht->array);
        free(ht);
}