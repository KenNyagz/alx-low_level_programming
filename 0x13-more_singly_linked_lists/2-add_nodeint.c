#include "lists.h"

/**
*add_nodeint - adds node to the beginning of a list
*@head:
*@n: 
*Return: pointer to node created
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = NULL;
new_node = malloc(sizeof(listint_t));

if (new_node ==  NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;

*head = new_node;
return (*head); /* return (new_node) ;Also valid*/
}
