#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Printing alphabet in lowercase with omission of q and e
 *Return: Always 0
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
while (c != 'q' && c != 'e')
{
putchar(c);
}
putchar('\n');
}
return (0);
}
