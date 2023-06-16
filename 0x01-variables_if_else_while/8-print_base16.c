#include <stdio.h>
#include <stdlib.h>

/**
*main -entry point
*Print all numbers of base 16 in lowercase
*Return: always 0
*/

int main(void)
{
int i;
char c;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
