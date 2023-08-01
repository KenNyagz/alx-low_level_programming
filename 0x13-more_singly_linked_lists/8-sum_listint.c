#include "lists.h"

/**
*sum_listint - sums all the data in nodes of list
*@head: pointer to first node
*Return: sum of data in nodes
*/

int sum_listint(listint_t *head)
{
listint_t *current = head;
int extracted = 0;

while (current != NULL)
{
extracted += current->n;
current = current->next;
}
return (extracted);
}
