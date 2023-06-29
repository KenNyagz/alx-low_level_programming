#include "main.h"

/**
* *_strncat - Concatenate two strings but limit to n bytes from src
*@dest: First string(Being concatenated to)
*@src: second string(to be added to  first)
*@n: - number of chars from src to be added to dest
*Return: char *dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while(dest[i] != '\0')
i++;

while (src[j] != '\0' && n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
dest[i] = '\0';

return (dest);
}
