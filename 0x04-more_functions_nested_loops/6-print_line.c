#include "main.h"

/**
*print_line - print a specified no of underscores
*@n: the parameter giving no of underscores
*Return: void
*/

void print_line(int n)



{
if (n < 1 && n < 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
