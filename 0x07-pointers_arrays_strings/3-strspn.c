#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: the string itself being checked
*@accept: the char combination being looked for
*Return: Bytes in s with chars comprising accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s != 0)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
break;
}
else if (accept[i + 1] == '\0')
return (count);
}
s++;
}
return (count);
}
