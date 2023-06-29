#include "main.h"

/**
*_strcmp - Compares two strings
*@s1: First string
*@s2: Second string
*Return: >0 if s1 is greater,0 if equal,<0 if s2 is greater
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 < *s2)
return (*s1 - *s2);
else if (*s1 > *s2)
return  (*s1 - *s2);

s1++;
s2++;
}
return (*s1 - *s2);
}
