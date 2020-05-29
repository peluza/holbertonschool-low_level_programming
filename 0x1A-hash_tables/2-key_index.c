#include "hash_tables.h"
/**
 * key_index - the result of the hash
 * @key: the char is the key
 * @size:is the size of the list
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int result, res_key;

	res_key = hash_djb2(key);
	result = res_key % size;
	return (result);
}
