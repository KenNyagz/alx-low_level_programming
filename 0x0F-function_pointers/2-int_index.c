#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: array to be searched
*@size: size of array
*@cmp: function that compares values
*Return: 0 if there is a match, -1 otherwise
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);

}

return (-1);
}
