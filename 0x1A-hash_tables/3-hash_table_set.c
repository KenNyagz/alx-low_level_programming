#include "hash_tables.h"

/**
*hash_table_set - adds an element to the hash table
*@ht: the hash table you want to add or update the key/value to
*@key: is the key
*@value:  is the value associated with the key
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned int index = 0;
hash_node_t *node = NULL;

if (ht == NULL || key == NULL)
	return (0);
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
