#include "hash_tables.h"
/**
 * hash_table_set - the result of the hash
 * @ht: is the size of the list
 * @value: the char is the value
 * @key: the char is the key
 * Return: hash value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp1 = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp1 = ht->array[index];
	while (tmp1)
	{
		if (strcmp(tmp1->key, key) == 0)
		{
			if (tmp1->value)
				free(tmp1->value);
			tmp1->value = strdup(value);
			if (tmp1->value == NULL)
				return (0);
			return (1);
		}
		tmp1 = tmp1->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
