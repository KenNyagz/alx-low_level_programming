#include "lists.h"

/**
*insert_nodeint_at_index - inserts node at a specified point
*@head: pointer to first node of list
*@idx: where to insert node
*@n: data to store in node
*Return: address of newnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
size_t i = 0;
listint_t *newnode;
listint_t *current = *head;

if (idx == 0)
{
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);

newnode->next = *head;
newnode->n = n;
*head = newnode;
return (newnode);
}

while (current != NULL && i < idx)
{
current = current->next;
i++;
}

newnode = malloc(sizeof(listint_t));
if (current == NULL)
return (NULL);
newnode->n = n;
newnode->next =  current->next;
current->next = newnode;

return (newnode);
}
