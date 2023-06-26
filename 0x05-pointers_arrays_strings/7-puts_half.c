#include "main.h"

/**
*puts_half - prints second half a string
*@str: string to be halved
*Return: Void
*/

void puts_half(char *str)
{
int i = 0;
while (*str != '\0')
{
i++;
str++;
}
str -= (i / 2);
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
