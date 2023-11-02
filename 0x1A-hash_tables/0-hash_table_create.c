#include "hash_tables.h"

/**
*
*
*
*
*/

hash_table_t *hash_table_create(unsigned long int size)
{


	hash_table_t *newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->size = size;


	return (newtable);
}
