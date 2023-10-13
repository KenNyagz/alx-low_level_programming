#include "lists.h"

/**
*
*
*
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count =0;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(current);
	}
	while (count <= index && current != NULL)
	{		
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (1);
	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (0);
}
