#include "lists.h"

/**
*add_dnodeint - adds a new nodeto a doubly linked list
*@head: address of pointer to first node of linked list
*@n: data to be in new node
*Return: pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode ==  NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	else
		newnode->next = NULL;

	*head = newnode;
	return (newnode);
}
