#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int rem = n % 10;

if (rem > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, rem);
}
else if (rem == 0)
{
printf("Last digit of %d is and 0 and is  0", n);
}
else
{
printf("Last digit of %d is %d and is less than 6", n, rem);
}

return (0);

}
