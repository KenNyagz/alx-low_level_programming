#include "main.h"

/**
**string_toupper - Changes lowercase letter in a string to uppercase
*@s: the string
*Return: char *
*/

char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
s[i] = s[i] - 32;
i++;
}
return (s);
}
