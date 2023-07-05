#include "main.h"

/**
*_strlen_recursion - returns the length of astring
*@s: the string input
*Return: the sum of chars in s
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);

s++;
return (1 + _strlen_recursion(s));
}
