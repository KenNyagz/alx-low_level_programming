#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*print single digit numbers of base 10
*Return: Always 0
*/

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
