#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        hash_node_t *new_node, *tmp;
        unsigned long int index;

        if (ht == NULL || key == NULL || value == NULL)
                return (0);
        index = key_index((unsigned char *)key, ht->size);
        tmp = ht->array[index];
        while (tmp)
        {
                if (strcmp(tmp->key, key) == 0)
                {
                        if (tmp->value)
                                tmp->value = strdup(value);
                        if (tmp->value == NULL)
                                return (0);
                }
                tmp = tmp->next;
        }
        new_node = malloc(sizeof(hash_node_t));
        if (new_node == NULL)
                return (0);
        new_node->key = strdup(key);
        if (new_node->key == NULL)
        {
                free(new_node);
                return (1);
        }
        new_node->value = strdup(value);
        if (new_node->value == NULL)
        {
                free(new_node->key);
                free(new_node);
                return (1);
        }
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
        return (1);
}