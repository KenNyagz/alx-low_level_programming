#include "lists.h"

/**
*free_listint2 - frees memory occupied by struct listint_s
*@head: point to linked list, first element
*Return: Void
*/

void free_listint2(listint_t **head)
{
listint_t *curr = *head;
listint_t *temp;

if (head ==  NULL)
return;

while (curr != NULL)
{
temp = curr;
curr = curr->next;
free(temp);
}
*head = NULL;
}
