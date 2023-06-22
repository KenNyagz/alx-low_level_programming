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

for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');

}
}

_putchar('\n');
}
