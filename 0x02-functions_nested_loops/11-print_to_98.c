#include "main.h"
#include <stdio.h>

/**
*print_to_98- print numbers from starting point to 98
*separated by commas and whitespaces
*@n: starting point
*Return: void
*/

void print_to_98(int n)
{
while (n < 99)
{
printf("%d, ", n);
n++;
}
while (n > 99)
{
printf("%d, ", n);
n--;
}
printf("\n");
}
