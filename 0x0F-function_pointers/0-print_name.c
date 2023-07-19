#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_name - prints a name
*@name: pointer to string with the name
*@f: function that prints name
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
(*f)(name);
return;
}
