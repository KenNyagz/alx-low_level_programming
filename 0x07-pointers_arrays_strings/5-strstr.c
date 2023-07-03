#include "main.h"
#include <stdio.h>

/**
* *_strstr - locates a substring
*@haystack: the original string
*@needle: the string being looked ofr in original
*Return: pointer to haystack if succesfull, null if not
*/

char *_strstr(char *haystack, char *needle)
{
for (;  *haystack != '\0'; haystack++)
{
char *c = needle;
char *a = haystack;
while (*a == *c && *c != '\0')
{
c++;
a++;
}
while (*c == '\0')
return (haystack);
}
return (NULL);
}
