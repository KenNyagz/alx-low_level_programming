#include "hash_tables.h"

/**
*hash_table_print - function that prints a hash table
*@ht:  the hash table
*
*/

void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node = NULL;
unsigned int i = 0;

if (ht == NULL)
	return;
/*node = *(ht->array);*/
printf("{");
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while (node != NULL)
	{
		printf("'%s': '%s',", node->key, node->value);
		if (node->next != NULL)
			printf(", ");
		node = node->next;
	}
}
printf("}\n");

}
