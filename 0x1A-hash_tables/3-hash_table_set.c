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

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;


	if (!ht->array[index])
		node->next = ht->array[index];
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
