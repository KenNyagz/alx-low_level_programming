#include "lists.h"

/**
*add_dnodeint_end - adds node at the end of the linked list
*@head: address of pointer to first element of list
*@n: Data to be inserted in new node
*Return: Addressof newnode
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current = *head, *newnode = NULL;

newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
		newnode->n = n;
		newnode->prev = current;
		newnode->next = NULL;
	}
	return (newnode);

}
