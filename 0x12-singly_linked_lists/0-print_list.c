#include "lists.h"

/**
*print_list - prints all elements of a struct list_s
*@h: pointer to a struct list_s(typdef'd as list_t
*Return: No of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[%ld] (nil)\n", count);

count++;
h = h->next;

}

return (count);
}
