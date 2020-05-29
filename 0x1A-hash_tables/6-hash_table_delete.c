#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
        unsigned long int i, size;

        size = ht->size;
        for (i = 0; i < size; i++)
        {
                if (ht->array[i])
                {
                        free(ht->array[i]->key);
                        free(ht->array[i]->value);
                }
        }
        free(ht->array);
        free(ht);
}