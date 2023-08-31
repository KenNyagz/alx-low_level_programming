#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: number to be altered
*@index: position to alter bit
*Return: 1 on success -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1ul << index;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

*n &= ~mask;
return (1);
}
