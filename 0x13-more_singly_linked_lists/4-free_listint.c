#include "lists.h"

/**
*free_listint - frees memory occupied by a struct listint_s
*@head: pointer to list to be freed
*Return: void
*/

void free_listint(listint_t *head)
{
listint_t *curr = head;

while (curr != NULL)
{
curr = curr->next;
free(head);
head = curr;
}

}
