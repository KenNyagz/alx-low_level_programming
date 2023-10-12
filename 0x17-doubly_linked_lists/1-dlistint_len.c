#include "lists.h"

/**
*dlistint_len - returns the number of elements in a doubly linked list
*@h: pointer to first element of list
*Return: Nmber of elements/nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		count++;
		current = (*current).next;
	}
return (count);
}
