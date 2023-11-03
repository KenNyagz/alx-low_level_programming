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

if (ht == NULL || key == NULL || value == NULL || *key == '\0' ||
ht->array == NULL)
	return (0);
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
index = hash_djb2((const unsigned char *)key) % ht->size;

	if (!ht->array[index] || strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index] = node;
		node->next = NULL;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
