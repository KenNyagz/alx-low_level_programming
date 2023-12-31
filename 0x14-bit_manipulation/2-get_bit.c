#include "main.h"

/**
*get_bit - get the value of a bit at a given index
*@n: the integer input to be the operand
*@index: the bit specifier for the function
*Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int mask = 1 << index;
int bitval;

if (index > sizeof(n) * 8)
return (-1);

bitval = (n & mask) ? 1 : 0;

return (bitval);
}
