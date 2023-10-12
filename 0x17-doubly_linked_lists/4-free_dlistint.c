#include "lists.h"

/**
*free_dlistint - frees a doubly linked list
*@head:  pointer to first element of list
*Return: Void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
