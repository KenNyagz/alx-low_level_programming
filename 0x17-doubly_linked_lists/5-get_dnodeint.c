#include "lists.h"

/**
*get_dnodeint_at_index - get node at a specific position in at a
*			specific position in a doubly linked list
*@head: address of first element in doubly linked list
*@index: position of node in list to be retrieved
*Return: node at the specified position
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL && count < index)
	{
		count++;
		current = current->next;
	}
	if (count == index) /*Not sure if the code from here is necessary tbh*/
		return (current);
	if (count > index)
		return (NULL);
	return (current);
}
