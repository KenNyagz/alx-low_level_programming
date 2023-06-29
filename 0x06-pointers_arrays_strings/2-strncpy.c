#include "main.h"

/**
* *_strncpy - Copies one string onto another
*@dest : the string being copied to(overwritten)
*@src: the string being copied
*return: char *dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (src[i] != '\0' && n > 0)
{
dest[j] = src [i];
i++;
j++;
n--;
}

while (n > 0)
{
dest[j] = '\0';
j++;
n--;
}
return (dest);
}
