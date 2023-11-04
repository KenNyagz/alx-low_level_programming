#include "hash_tables.h"

/**
*hash_table_delete - deletes a hash table
*@ht: the hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *current2 = NULL, **temp = NULL;
	unsigned int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	temp = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (temp[i] == NULL)
			continue;
		if (temp[i]->next == NULL)
		{
			free(temp[i]->key);
			free(temp[i]->value);
			free(temp[i]);
		}
		else
		{
			current = temp[i];
			while (current != NULL)
			{
				free(current->key);
				free(current->value);
				current2 = current->next;
				free(current);
				current = current2;
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
