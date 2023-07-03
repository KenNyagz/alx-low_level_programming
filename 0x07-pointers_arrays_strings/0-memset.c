#include "main.h"

/**
* *_ memset - Fills memory with a constant byte.
*@s: the memory block of chars.
*@b: the constant char byte being filled
*@n: number of bytes being filled.
*Return: pointer to the memory area *s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
