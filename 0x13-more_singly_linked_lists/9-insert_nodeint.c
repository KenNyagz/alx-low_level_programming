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
newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);


while (newnode != NULL && i < idx)
{
current = current->next;
if (current == NULL)
return (NULL);
i++;
}
newnode->n = n;
newnode->next =  current->next;
current->next = newnode;

return (newnode);
}
