#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_calloc - alloacates memory for an array
*@nmemb: number of elements in the array
*@size: size in bytes of each member of the array
*Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

void *ptr;
char *a;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

a = ptr;
for (i = 0; i < (nmemb * size); i++)
a[i] = '\0';

return (ptr);
}
