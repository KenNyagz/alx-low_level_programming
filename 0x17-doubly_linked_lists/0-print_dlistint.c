#include "lists.h"

/**
*print_dlistint - prints all the elements of a doubly linked list list
*@h: pointer to doubly linked list
*Return:Number of Nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
ssize_t count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

return (count);
}
