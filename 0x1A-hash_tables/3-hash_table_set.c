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
	hash_node_t *r;
	hash_node_t *node_head;
	unsigned long int _idx;
	char *empty_str = "\0";

	if (ht == NULL || key == NULL || strcmp(key, empty_str) == 0)
		return (0);
	_idx = key_index((unsigned char *)key, ht->size);
	node_head = ht->array[_idx];
	r = add_node(&node_head, key, value);
	ht->array[_idx] = node_head;
	if (r == NULL)
		return (0);
	return (1);
}

/**
 *add_node - adds a new node 
 *@head: is the size of the list
 *@key: the char is the value
 *@value: the char is the key
 *Return: a pointer to the new head
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp = NULL;

	temp = *head;
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
