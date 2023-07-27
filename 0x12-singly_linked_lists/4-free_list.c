#include "lists.h"

/***
*free_list - frees memory occupied by type list_t
*@head: pointer to list occpying memory
*Return: void
*/

void free_list(list_t *head)
{
if (head != NULL)
free(head);

}
