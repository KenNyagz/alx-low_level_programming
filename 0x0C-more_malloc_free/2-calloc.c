#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*calloc - alloacates memory for an array
*@nmemb: number of elements in the array
*@size: size in bytes of each member of the array
*Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
return (NULL);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
