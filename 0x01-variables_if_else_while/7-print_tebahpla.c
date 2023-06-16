#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*Prints lowercase alphabet in reverse
*Return: Always 0
*/

int main(void)
{
int c;
for (c = 122; c > 96; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
