#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: bytes of s2 being added to s1
*Return: NULL on failure or s1 memory block
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0;
unsigned int s2_len = 0;
char *s3;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);

if (n > s2_len)
n = s2_len;

s3 = malloc(s1_len + n +1);

if (s3 == NULL)
return (NULL);

strcpy(s3, s1);
strncat(s3, s2, n);

return (s3);
}
