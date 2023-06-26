#include "main.h"

/**
*rev_string - reverses a string
*@s: the string input
*Return: void
*/

void rev_string(char *s)
{
char tmp;
int i, j;

for (j = 0; s[j] != '\0'; ++j)
;
for (i = 0; i < j / 2; i++)
{
tmp = s[i];
s[i] = s[j - 1 - i];
s[j - 1 - i] = tmp;
}
}
