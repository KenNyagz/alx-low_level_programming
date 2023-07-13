#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - allocates memory
*@b: bytes to be allocated
*Return: area of memory reserved
*/

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
