#include "lists.h"

/**
*listint_len - get the length of list
*@h: pointer to first node
*Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}
