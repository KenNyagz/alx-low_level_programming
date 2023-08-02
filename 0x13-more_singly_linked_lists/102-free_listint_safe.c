#include "lists.h"

size_t looped_listint_x(const listint_t *head);

/**
*looped
*
*
*/

/*size_t looped_listint_x(const listint_t *head)
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
}*/

/**
*free_listint_safe - frees memory occpied by listint_t object
*@h: pointer to first list element's address
*return: size of list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *temp;

size_t count, index;

count = looped_listint_x(*h);

if (count == 0)
{
	for (; h != NULL && *h != NULL; count++) 
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
	
}
else
{
	for (index = 0; index < count; index++)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
*h = NULL;
}
return (count);
}
