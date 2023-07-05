#include "main.h"

/**
*_strlen_recursion - returns the length of astring
*@s: the string input
*Return: the sum of chars in s
*/

int _strlen_recursion(char *s)
{
int count = 0;

if (*s != '\0')
{
count++;
count = _strlen_recursion(s + 1);
}
return (count);
}
