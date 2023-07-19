#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
*f - iterates and prints a name
*@name: pointer to string with the name
*
*Return: void
*/

/*void f(char *name)
{
while (name)
{
printf("%s\n", name);
}
}*/

/**
*print_name - prints a name
*@name: pointer to string with the name
*@f: function that prints name
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
