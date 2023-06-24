#include "main.h"

/**
*jack_bauer - prints every hour and minute in a day
*
*Return: void
*/

void jack_bauer(void)
{
int f, i, j, k, l, m;
for (i = 0; i < 24; i++)
{
for (m = 0; m < 60; m++)
{

k = m / 10;
l = m % 10;
f = i / 10;
j = i % 10;

_putchar(f + '0');
_putchar(j + '0');
_putchar (':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
_putchar('\n');

}

