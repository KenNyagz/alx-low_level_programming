#include "main.h"

/**
*_puts - printsa  string followed by a new line to stdout
*@str: the string
*Return: void
*/

void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
}
