#include "main.h"

/**
*print_rev - takes a string and prints it in reverse
*@s:  the string
*Return: void
*/

void print_rev(char *s)
{
int i;

while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
