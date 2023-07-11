#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars
*@size: the length of the array
*@c: the char that initializes the array
*Return: NULL if size = 0, pointer to array otherwise
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p = malloc(size * sizeof(char));

if (p == 0)
return (NULL);
if (!p)
return (NULL);

for (i = 0; i < size; i++)
p[i] = c;

return (p);
}
