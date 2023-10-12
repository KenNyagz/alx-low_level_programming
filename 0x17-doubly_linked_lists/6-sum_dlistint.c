#include "lists.h"

/**
*sum_dlistint - returns sum of all the data of doubly linked list
*@head: pointer to first element of doubly linked list
*Return: Sum of data on all nodes
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
return (sum);
}
