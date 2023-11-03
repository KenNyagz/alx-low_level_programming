#include "hash_tables.h"

/**
*hash_table_get - retrieves a value associated with a key
*@hash_table: hash table you want to look into
*@key:  key you are looking for
*Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;

	index = hash_djb2((const char *key), ht->size);
	

	return (ht->array[index];
}
