#include <stdlib.h>
#include <stdio.h>

/**
*main - enrty point
*Print all tw digit combinations separated by , and space
*Return: Always 0
*/

int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = i + 1; j < 58; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

