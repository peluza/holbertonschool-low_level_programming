#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
        unsigned int i = 0;
        int inter = 0;

        if (ht == NULL)
                return;
        printf("{");
        for (i = 0; i < ht->size; i++)
        {
                if (ht->array[i])
                {
                        if (inter > 0)
                                printf(", ");
                        printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
                        inter++;
                }
        }
        printf("}\n");
}