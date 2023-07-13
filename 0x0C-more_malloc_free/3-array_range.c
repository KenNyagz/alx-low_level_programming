#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of int in a range
*@min: starting point of the range
*@max: ending point of the range
*Return: pointer to the created array
*/

int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
return (NULL);

ptr = malloc((max - min + 1) * sizeof(int));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
{
ptr[i] = min;
}

return (ptr);
}
