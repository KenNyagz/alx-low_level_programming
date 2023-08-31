#include "main.h"

/**
*flip_bits - gets number of bits you would
*	need to flip to get from one number to another
*@n: First number
*@m: second number
*Return: No of bits required to move from n to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
