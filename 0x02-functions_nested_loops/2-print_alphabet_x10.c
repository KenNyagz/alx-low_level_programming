#include "main.h"

/**
*print_alphabet_x10 - print the alphabet 10
*time on new lines
*Return: always 0
*/

void print_alphabet_x10(void)
{
int c;
int i = 0;
for (i = 0; i <= 9; i++)
{
for (c = 97; c <= 122; c++)
_putchar(c);
_putchar('\n');
}
}
