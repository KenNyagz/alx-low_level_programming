#include "lists.h"

/**
*delete_dnodeint_at_index - deletes doubly linked lst node at an index
*@head: address of pointer to first list element
*@index: position to delete node at
*Return: 1 on success, -1 0n failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (count < index && current != NULL)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);
	if (current->next ==  NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	e	current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}
