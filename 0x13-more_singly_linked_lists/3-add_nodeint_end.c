#include "lists.h"

/**
*add_nodeint_end - adds node to the end of a list
*@head: pointer to first list element's address
*@n: data to input to created node
*Return: pointer to the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lastnode;
listint_t *current;
lastnode = malloc(sizeof(listint_t));

if (lastnode == NULL)
return (NULL);

lastnode->n = n;
lastnode->next = NULL;

if (*head ==  NULL)
*head = lastnode;
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = lastnode;
}
return (lastnode);
}
