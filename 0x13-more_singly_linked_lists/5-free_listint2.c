#include "lists.h"

/**
*free_listint2 - frees memory occupied by struct listint_s
*@head: point to linked list, first element
*Return: Void
*/

void free_listint2(listint_t **head)
{
listint_t *curr;

if(head == NULL)
return;

while (*head)
{
curr = (*head)->next;
free(*head);
*head = curr;
}
head = NULL;
}
