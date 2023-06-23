#include "main.h"
#include <stdio.h>

/**
*main -entry point
*print 1-100 but print fizz on multples of 3
*print buzz on multiples of 5 and FizzBuzz on multiples of both
*Return:void
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("%c", '\n');
return (0);
}
