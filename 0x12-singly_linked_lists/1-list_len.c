#include "lists.h"

/**
*list_len - returns number of elements in a list
*@h: pointer to a struct list_s
*Return: number of elements in list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
