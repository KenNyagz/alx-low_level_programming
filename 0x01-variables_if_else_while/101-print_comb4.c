#include <stdio.h>
#include <stdlib.h>
/**
*main- entry point
*Code prints Three digit combinations
*without repeating numbers in different combinations or
*with similar digits
*Return: Always 0
*/
int main(void)
{
int i;
int j;
int k;

for (i = 48; i < 58; i++)
{
for (j = i + 1 ; j < 58; j++)
{
for (k = j + 1; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k == 57)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
