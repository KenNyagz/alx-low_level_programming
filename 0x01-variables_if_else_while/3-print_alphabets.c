#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Prints alphabet in lowrcase then uppercse
 *Return: Always 0
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
