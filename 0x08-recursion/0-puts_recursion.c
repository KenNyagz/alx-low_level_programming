#include "main.h"

/**
*_puts_recusrion - prints a string
*@s: the string
*Return: Void
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
return;
_putchar(*s);
s++;
_puts_recursion(s);
_putchar('\n');

}
