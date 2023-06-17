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
for (i = 49; i <= 57; i++)
{
for (j = 49; j <= 57; j++)
{
putchar(i);
putchar(j);
}
}
return (0);
}
