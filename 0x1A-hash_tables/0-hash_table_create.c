#include "hash_tables.h"
/**
 * hash_table_create - the funtion at create a hash table
 * @size: The number at size of the array
 * Return: the pointers at newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **new_array = NULL;

	if (size < 1)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_array = calloc(size, sizeof(hash_node_t *));
	if (new_array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = new_array;
	return (new_table);
}
