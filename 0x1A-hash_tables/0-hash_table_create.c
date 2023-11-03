#include "hash_tables.h"

/**
*hash_table_create - creates a new hash table
*@size: size of the associative array
*Return: The new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *newtable = calloc(size, sizeof(hash_table_t));
	/*hash_table_t *newtable[size];*/

	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	for (i = 0; i < size; i++)
		;/*newtable->array[i] = NULL;*/

	return (newtable);
}
