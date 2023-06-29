#include "main.h"

/**
* *_strcat - Concatenates Two strings
*@dest:  first string(Being added to from second)
*@src:  second string(added to first)
*Return: char *dest
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != 0)
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
