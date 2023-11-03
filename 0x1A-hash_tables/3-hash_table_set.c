#include "hash_tables.h"

/**
*
*
*
*
*/

int hash_table_set(hash_table_t* ht, const char* key, const char* value)
{
unsigned int index = 0;
hash_node_t *node = NULL;

node = malloc(sizeof(hash_node_t));
node->key = strdup(key);
node->value = strdup(value);

index = hash_djb2((const unsigned char *)key) % ht->size;

	if (!ht->array[index])
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
