#include "main.h"

/**
*more_numbers - print 0-10 14 times
*@i:int to be printed
*@j:iteration
*Return: void
*/

void more_numbers(void)
{
int i;
int j,k;
int l = 0;
while (l<10)
{
for (i = 0; i <= 14; i ++)
{
j = i/10;
k = i%10;

_putchar(j + '0');
_putchar(k + '0');
_putchar(',');    

}
l++;
_putchar('\n');
}

}
