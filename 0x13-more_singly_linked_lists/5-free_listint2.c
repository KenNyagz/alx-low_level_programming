#include "lists.h"

/**
*free_list - frees memory occupied by struct listint_s
*@head: point to linked list, first element
*Return: Void
*/

void free_listint2(listint_t **head)
{
listint_t *curr = *head;

while (curr != NULL)
{
curr = curr->next;
free(*head);
*head = curr;
}
}
