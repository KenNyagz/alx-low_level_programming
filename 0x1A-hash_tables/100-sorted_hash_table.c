#include "hash_tables.h"

/**
 *shash_table_create - creates a new hash table; to be an ordered hash table
 *@size: size of the associative array
 *Return: The new (orderly) hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	shash_table_t *newtable = malloc(sizeof(shash_table_t));
	/*hash_table_t *newtable[size];*/

	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = calloc(size,  sizeof(shash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}

	newtable->shead = NULL;
	newtable->stail = NULL;

	for (i = 0; i < size; i++)
		newtable->array[i] = NULL;
	return (newtable);

}

/**
 *shash_table_set - adds an element to the ordered hash table
 *@ht: the hash table you want to add or update the key/value to
 *@key: is the key
 *@value:  is the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *current = NULL, *prev = NULL;
	unsigned int index = 0;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0' ||
			ht->array == NULL)
		return (0);
	node = malloc(sizeof(shash_node_t));
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
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
	}
	else
	{
		current = ht->shead;
		prev = NULL;

		while (current != NULL && strcmp(current->key, key) < 0)
		{
			prev = current;
			current = current->snext;
		}
		if(prev == NULL)
		{
			node->snext = current;
			node->sprev = prev;
			prev->next = node;
		}
		else
			ht->stail = node;
	}
	return (1);
}

/**
 *shash_table_get - retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key:  key you are looking for
 *Return: value associated with the element, or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	shash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);

}

/**
 *shash_table_print - function that prints a hash table
 *@ht:  the hash table
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	char flag = 0; /* while there no data being printed yet*/

	if (ht == NULL || ht->array == NULL)
		return;
	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->next;
	}

	printf("}\n");
}

/**
 *shash_table_print_rev - function that prints a hash table in reverse order
 *@ht:  the hash table
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	char flag = 0; /* while there no data being printed yet*/

	if (ht == NULL || ht->array == NULL)
		return;
	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}

	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i = 0;
	shash_node_t *current = NULL, *next = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	current = ht->shead;
	next = NULL;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht);
}
