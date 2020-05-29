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
	hash_node_t *inter = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	inter = ht->array[index];
	while (inter)
	{
		if (strcmp(inter->key, key) == 0)
		{
			return (inter->value);
		}
		inter = inter->next;
	}
	return (NULL);
}
