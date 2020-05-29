#include "hash_tables.h"
/**
 * hash_table_get - the hash table the get
 * @ht: is the size of the list
 * @key: the char is the key
 * Return: hash value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *inter;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		inter = inter->next;
	}
	return (NULL);
}
