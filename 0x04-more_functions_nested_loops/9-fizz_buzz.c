#include "main.h"
#include "_putchar.c"

/**
*main - entry point
*Print 0-100 ,FizzBuzz on mulitples of 15;
*Fizz on multiples of 3;
*Buzz on multiples of 5.
*Return: 0
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
}
else
_putchar(i + '0');
}
_putchar('\n');
return (0);
}
