#include "main.h"
#include <stdio.h>

/**
*create_array - creates an array of chars
*@size: the length of the array
*@c: the char that initializes the array
*Return: NULL if size = 0, pointer to array otherwise
*/

char *create_array(unsigned int size, char c)
{
char arr[] = "";
char *p = arr;

if (size == 0)
{
return (NULL);
}

arr[0] = c;

return (p);

}
