#include "lists.h"

/**
*print_listint - prints all elements of list
*@h: pointer to first element of list
*Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
