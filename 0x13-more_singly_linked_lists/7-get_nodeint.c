#include "lists.h"

/**
*get_nodeint_at_index - gets node at a specified point
*@head: pointer to first node in list
*@index: location to  add new node
*Return: node at specified index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i;
listint_t *current = head;



for (i = 0; i < index && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
return (NULL);

return (current);
}
