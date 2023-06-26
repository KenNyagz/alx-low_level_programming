#include "main.h"
#include "stdio.h"
/**
*_strlen - returns the length of string
*@s: the string to be checked
*Return: 0
*/

int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}
