#include "main.h"

/**
*more_numbers - print 0-10 14 times
*Return: void
*/

void more_numbers(void)
{
int i, j, k;
int l = 0;

while (l<10)
{
for (i = 0; i <= 14; i ++)
{
j = i/10;
k = i%10;
if (j > 0)
_putchar(j + '0');
_putchar(k + '0');
if(j == 1 && k == 4 )
continue;
_putchar(',');    

}
l++;
_putchar('\n');
}

}
