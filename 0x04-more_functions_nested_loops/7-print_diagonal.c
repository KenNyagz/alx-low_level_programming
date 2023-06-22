#include "main.h"

/**
*print_diagonal - print several \ to form diagonal on terminal
*@n: int to set diagonal size
*Return:void
*/

void print_diagonal(int n)
{


if (n < 1 || n < 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

_putchar('\n');
}
}
