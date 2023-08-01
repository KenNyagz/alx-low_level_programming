#include "lists.h"

/**
*reverse_listint - reverses a linked list
*@head: pointer to list(first element)
*Return: address of first element of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *nextnode;
listint_t *prevnode = NULL;

nextnode = current = *head;

while (nextnode != NULL)
{
nextnode = nextnode->next;
current->next = prevnode;
prevnode = current;
current = nextnode;
}
*head = prevnode;
return (prevnode);
}
