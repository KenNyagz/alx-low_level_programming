#include "lists.h"

/**
*add_node - function that adds a node to the beginning of a function
*@head: the first element of list
*@str: string that is to be duplicated
*Return: add of new element, ie new head, NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));

if (new_node != NULL)
{
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;

*head = new_node;
return (new_node);
}
else
return (NULL);
}
