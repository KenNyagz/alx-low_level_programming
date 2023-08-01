#include "lists.h"

/**
*print_listint_safe - prints linked list
*@head: pointer to first element in list
*Return: Number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow = head;
const listint_t *fast = head;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

printf("[%p] %d\n", (void *)slow->next, slow->n);
count++;

if (slow == fast)
{
printf("->  [%p] %d\n", (void *)fast->next, fast->next->n);
printf("->  [%p] %d\n", (void *)fast->next->next, fast->next->next->n);

exit (98);
}

}

return (count);
}
