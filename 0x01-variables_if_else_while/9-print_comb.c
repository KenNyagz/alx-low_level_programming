#include <stdlib.h>
#include <stdio.h>

/**
*main - entry point
*print all single digits separated by comma
*Return: Always 0
*/

int main(void)
{
int i;
for (i = 48; i <= 57 ; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
