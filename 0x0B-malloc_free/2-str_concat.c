#include <string.h>
#include "main.h"
#include <stdlib.h>

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

i = strlen(s1);
j = strlen(s2);

s3 = (char *) malloc((i + j + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);

strcpy(s3, s1);
strcat(s3, s2);

return (s3);
}
