#include "lists.h"

/**
*pop_listint - removes first node and gets us it
*@head: pointer to first node's address
*Return: data contained in removed node
*/

int pop_listint(listint_t **head)
{
int extracted;
listint_t *current;

if (*head == NULL)
return (0);

extracted = (*head)->n;

current = *head->next;
free(*head);
*head = current;

return (extracted);
}
