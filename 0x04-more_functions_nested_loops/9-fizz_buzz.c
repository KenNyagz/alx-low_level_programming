#include "main.h"
#include <stdio.h>

/**
*main -entry point
*print 1-100 but print fizz on multples of 3
*print buzz on multiples of 5 and FizzBuzz on multiples of both
*Return: O
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (i % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else
printf("%d", i);
printf(" ");
}
return (0);
}
