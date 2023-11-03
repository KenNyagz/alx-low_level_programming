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
char flag = 0; /* while there no data being printed yet*/

if (ht == NULL || ht->array == NULL)
	return;
/*node = *(ht->array);*/
printf("{");
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->next;
	}
}
printf("}\n");
}
