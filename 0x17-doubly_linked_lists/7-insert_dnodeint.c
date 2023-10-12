#include "lists.h"

/**
*insert_dnodeint_at_index - insert node at specified index
*@h: address of first list element
*@idx: the position to add node
*@n: data to add in node
*Return: newnode address
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h, *newnode = NULL;
unsigned int count = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	for (count = 0; count < idx - 1; count++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)/*if loop has led to NULL end of list*/
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = current->next;
	newnode->prev = current;

	if (current->next != NULL)
	current->next->prev = newnode;

	current->next = newnode;
	return (newnode);
}
