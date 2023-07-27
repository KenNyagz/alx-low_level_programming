#include "lists.h"

/**
*add_node_end -  adds  a node to the end of a list
*@head: first list element
*@str: string to be duplicated into the new node
*Return: address of new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *current = NULL;
list_t *last_node = malloc(sizeof(list_t));

if (last_node == NULL)
{
return (NULL);
}

last_node->str = strdup(str);
last_node->len = strlen(str);
last_node->next = NULL;


if (*head == NULL)
*head = last_node;
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = last_node;
}
return (last_node);
}
