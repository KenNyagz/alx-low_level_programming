#include "hash_tables.h"

/**
*hash_table_create - creates a new hash table
*@size: size of the associative array
*Return: The new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *newtable = malloc(sizeof(hash_table_t));
	/*hash_table_t *newtable[size];*/

	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = calloc(size,  sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		newtable->array[i] = NULL;
	return (newtable);
}
