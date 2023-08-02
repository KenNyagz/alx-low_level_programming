#include <stdio.h>
#include "lists.h"

/*size_t looped_listint_x(const listint_t *head);*/

/**
*looped_listint_x - loops list
*@head: pointer to first element in list
*Return: Number of nodes in list
*/

size_t looped_listint_x(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 1;

if (head == NULL || head->next == NULL)
return (0);

slow = head->next;
fast = (head->next)->next;

while (fast)
{
	if (slow == fast)
	{
		slow = head;
		while (slow != fast)
		{
			count++;
			slow = slow->next;
			fast = fast->next;
		}
		slow = slow->next;
		while (slow != fast)
		{
			count++;
			slow = slow->next;
		}
		return (count);
	}
	slow = slow->next;
	fast = (fast->next)->next;
}
return (0);
}

/**
*print_listint_safe - prints linked list
*@head: first element of list
*Return: number of nodes in list
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count, index = 0;
count = looped_listint_x(head);

if (count == 0)
{
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		index++;
	}
}
else
{

	while (index < count)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		index++;
	}
	printf("->[%p] %d\n", (void *)head, head->n);



}
return (count);
}
