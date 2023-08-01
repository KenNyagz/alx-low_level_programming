#include "lists.h"

/**
*delete_nodeint_at_index -  deletes node at a certain point in the linked list
*@head: pointer to first node's address
*@index: point at which to delete a node
*Return: 1 if success -1 if not
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
size_t i = 0;
listint_t *nextnode, *nownode;
listint_t *current = *head;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

while (i < (index - 1) && current != NULL)
{
current = current->next;
i++;
}
if (current ==  NULL)
return (-1);

nownode = current;
nextnode = current->next->next;
if (nextnode == NULL)
nownode->next = NULL;
else
nownode->next = nextnode;

free(current);
return (1);
}
