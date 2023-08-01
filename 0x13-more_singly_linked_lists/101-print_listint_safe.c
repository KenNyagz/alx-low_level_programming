#include "lists.h"

/**
*print_listint_safe - prints linked list
*@head: pointer to first element in list
*Return: Number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *temp = head;

while (temp != NULL)
{
printf("[%p]", (void *)(*temp).next);
printf("%d\n", temp->n);

count++;
temp = temp->next;
}

return (count);
}
