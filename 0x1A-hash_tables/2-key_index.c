#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        int result, res_key;

        res_key = hash_djb2(key);
        result = res_key % size;
        return (result);
}