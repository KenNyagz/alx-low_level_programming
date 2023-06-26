#include "main.h"

/**
*print_rev - takes a string and prints it in reverse
*@s:  the string
*Return: void
*/

void print_rev(char *s)
{
int i;
int j;

i = 0;

while (*s != '\0')
{
i++;
s++;
}
s--;
for (j = i; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
