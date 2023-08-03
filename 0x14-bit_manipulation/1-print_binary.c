#include "main.h"

/**
*print_binary - prints binary representation of a number
*@n: number to be converted to binary
*Return: void
*/

void print_binary(unsigned long int n)
{
unsigned int mask = 1u << 31;
short int nonzerobit = 0;

while (mask > 0)
{
if (n & mask)
{
printf("1");
nonzerobit = 1;
}
else
{
if (nonzerobit)
printf("0");
}
mask >>= 1;
}
if (!nonzerobit)
printf("0");
}
