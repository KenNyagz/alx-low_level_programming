#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string(added tos s1)
*Return: Pointer to concated string, null if empty string
*/

char *str_concat(char *s1, char *s2)
{
int i, j;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i])
i++;
while (s2[j])
j++;

s3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);

strcpy(s3, s1);
strcpy(s3, s2);

return (s3);
}
