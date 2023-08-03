#include "main.h"

/**
*set_bit - a function that sets a bit to 1 at given index
*@n: decimal number to be altered
*@index: position of bit to be altered
*Return: 1 if successful -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1ul << index;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n |= mask;
return (1);
}
