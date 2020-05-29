#include "hash_tables.h"
/**
 * hash_table_print - the print is the table
 * @ht: is the size of the list
 * Return: hash value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, size;
	int inter = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			while (ht->array[i] != NULL)
			{
				if (inter > 0)
					printf(", ");
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				inter++;
				ht->array[i] = ht->array[i]->next;
			}
		}
		printf("}\n");
	}
}
