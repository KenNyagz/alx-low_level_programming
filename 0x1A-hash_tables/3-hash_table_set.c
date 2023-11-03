#include "hash_tables.h"

/**
*hash_table_set -  function that adds an element to the hash table
*@key: the key of the key-value pair
*@value:  value associated with the key
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *node;

	index = (hash_djb2((const unsigned char *)key) % ht->size);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;

	if (!ht->array[index])
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
