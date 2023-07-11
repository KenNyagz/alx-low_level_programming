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
int i;
char *p = malloc(size * sizeof (char));

if (size == 0)
{
return (NULL);
}
for (i = 0; i < c; i++)
p[i] = c;
return (p);

}
