#include "main.h"
#include <stdlib.h>

/**
*_realloc -  reallocates memory suing malloc and free
*@ptr: pointer to old size
*@old_size: size in bytes of old memory block
*@new_size: size on bytes of new memory block
*Return: pointer to new_size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
old_size = sizeof(malloc(new_size));
new_size = sizeof(malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size + old_size);
free(ptr);

return (new_ptr);
}



