#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - executes functions in an array
*@array: array containing function pointers
*@size: size of array
*@action: function to be executed
*Return : Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int  i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
(*action)(array[i]);
}
}
