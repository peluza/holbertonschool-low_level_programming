#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int index;

        if (ht == NULL || key == NULL)
                return (NULL);

        index = key_index((const unsigned char *)key, ht->size);

        if (ht->array[index])
        {
                if (strcmp(ht->array[index]->key, key) == 0)
                {
                        return (ht->array[index]->value);
                }
        }
        return (NULL);
}